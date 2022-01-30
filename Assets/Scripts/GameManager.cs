using System.Collections.Generic;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.InputSystem;
using System.Collections;
using System.IO;

public class GameManager : MonoBehaviour {

    [Header("General Game properties")]
    public GameObject player; //XR Origin (Rig)
    public float playerAutomaticMovingSpeed = 0.04f;
    public GameObject background;
    private PlayerController playerController;
    private float depthSpeed;
    private float timeStep;
    private float timer; 
    private int minutes;
    private int seconds;
    private bool gamePaused = false;
    private bool currentlyResumingGame = false;
    private float timeforResumingGame = 1.5f;
    public enum playerCategory { VeryBad, Bad, Average, Good, VeryGood };
    GameResult playerProfile;

    [Header("Treeline platforms for all agents")]
    public GameObject treelinePrefab;
    public GameObject treesParent; //parent of treelines
    public int treelineDensity; //nb of treelines to instantiate //10
    private float distanceBetweenTreelines = 4;
    private List<GameObject> treelines;
    private int nbTreesOnScreen = 10;

    [Header("Background trees for decoration")]
    public GameObject decorationTreesPrefab;
    public GameObject forestParent; //parent of decoration trees
    public int decorationTreesDensity; //nb of decoration trees to instantiate //4
    private float distanceBetweenDecorationTrees = 3;
    private List<GameObject> decorationTrees;

    [Header("UI Elements")]
    public GameObject menuPanel;
    public GameObject canvasTimer;
    public GameObject timerText;
    public GameObject ResumeGameNotification;
    public InputActionReference displayMenuReference = null;

    [Header("Enemies")]
    public GameObject enemyPrefab;
    public GameObject enemiesParent;
    private List<GameObject> enemies;
    //public GameObject verticalEnemyPrefab;
    //public GameObject horizontalEnemyPrefab;
    private int nbEnemiesGenerated;
    private int nbEnemiesToGenerate;
    private int nbEnemiesMin;
    private int nbEnemiesMax;
    private float enemyMinDamage;
    private float enemyMaxDamage;
    private int nbEnemiesMaxByTreeline;
    private float verticalEnemiesPerc;
    private float horizontalEnemiesPerc;
    private int totalEnemiesGenerated;
    private int totalEnemiesBeaten;

    [Header("Obstacles")]
    public GameObject obstaclePrefab;
    public GameObject obstaclesParent;
    private List<GameObject> obstacles;
    private int nbObstaclesGenerated;
    private int nbObstaclesToGenerate;
    private int nbObstaclesMin;
    private int nbObstaclesMax;
    private float obstacleMinDamage;
    private float obstacleMaxDamage;
    private int nbObstaclesMaxByTreeline;
    private int totalObstaclesGenerated;
    private int totalObstaclesBeaten;

    //calibration phase
    private List<string> levels = new List<string> {
        "level_tutorial_part1",
        "level_tutorial_part2",
        "level_tutorial_part3",
        "level_very_easy",
        "level_easy",
        "level_medium",
        "level_hard",
        "level_very_hard"
    };

    private int currentLevel;

    // Start is called before the first frame update
    void Start() {
        Time.timeScale = 1; //if == 0 : game pauses
        playerController = player.GetComponent<PlayerController>();

        if (PlayerPrefs.GetInt("player_profile") == -1) { //calibration phase
            currentLevel = 0;
            playerProfile = new GameResult();
        }
        else { //playing phase
            string playerProfileJson = File.ReadAllText(Application.streamingAssetsPath + Path.DirectorySeparatorChar + "Results" + Path.DirectorySeparatorChar + "player_profile"+ PlayerPrefs.GetInt("player_profile") + ".json");
            playerProfile = JsonUtility.FromJson<GameResult>(playerProfileJson);
        }
        playerProfile.dateOfPlay = System.DateTime.Now.Ticks;
        currentLevel = (int)playerProfile.playerLevel / 20;
        readGameLevel(levels[currentLevel]);

        //enemies
        //nbEnemiesMin = 5;
        //nbEnemiesMax = 10;
        //nbEnemiesMaxByTreeline = 2;

        nbEnemiesGenerated = 0;
        totalEnemiesGenerated = 0;
        totalEnemiesBeaten = 0;
        nbEnemiesToGenerate = Random.Range(nbEnemiesMin, nbEnemiesMax+1);

        enemies = new List<GameObject>();
        foreach (Transform child in enemiesParent.transform) {
            enemies.Add(child.gameObject);
        }
        
        //obstacles
        //nbObstaclesMin = 5;
        //nbObstaclesMax = 10;
        //nbObstaclesMaxByTreeline = 2;

        nbObstaclesGenerated = 0;
        totalObstaclesGenerated = 0;
        totalObstaclesBeaten = 0;
        nbObstaclesToGenerate = Random.Range(nbObstaclesMin, nbObstaclesMax+1);

        obstacles = new List<GameObject>();
        foreach (Transform child in obstaclesParent.transform) {
            obstacles.Add(child.gameObject);
        }

        //treeline platforms
        treelines = new List<GameObject>();
        foreach (Transform child in treesParent.transform) {
            treelines.Add(child.gameObject);
        }
        //wait for 2 treelines before spawning enemies/obstacles
        treelines = GenerateTrees(treelineDensity, distanceBetweenTreelines, treesParent, treelines, treelinePrefab, 2);

        //decoration trees
        decorationTrees = new List<GameObject>();
        foreach (Transform child in forestParent.transform) {
            decorationTrees.Add(child.gameObject);
        }
        decorationTrees = GenerateTrees(decorationTreesDensity, distanceBetweenDecorationTrees, forestParent, decorationTrees, decorationTreesPrefab);
    }

    // Update is called once per frame
    void Update() {
        //playing
        if (playerController.health > 0 && !gamePaused) {
            AutomaticMoveForward(playerAutomaticMovingSpeed, distanceBetweenTreelines, treelines);

            //pause game by clicking on left hand button menu
            if (displayMenuReference.action.triggered) {
                PauseGame();
            }

            //Generate or destroy treeline platforms & enemies/obstacles
            if (treelines.Count < nbTreesOnScreen) {

                if (currentLevel < levels.Count) {
                    currentLevel++;
                    if (playerProfile.playerLevel < 100) {
                        playerProfile.playerLevel += 20;
                    }
                }
                UpdateGameResults();
                LevelGeneration();
            }
            else {
                treelines = DestroyFromList(treelines);
                decorationTrees = DestroyFromList(decorationTrees);
                DestroyEnemiesAndObstacles();
            }

            UpdateTimer();
            playerAutomaticMovingSpeed += 0.000005f; //make the game harder with time
        }
        //resume game when paused
        else if (gamePaused && displayMenuReference.action.triggered && playerController.health > 0 && !currentlyResumingGame) { 
            ResumeGame();
        }
        //game ended
        else if (playerController.health <= 0 && !gamePaused) {
            GameOver();
        }

    }

    /// <summary>
    /// generate trees
    /// </summary>
    /// <param name="density">nb to generate</param>
    /// <param name="distanceBetweenTrees">distance that seperate trees</param>
    /// <param name="parent">parent gameobject</param>
    /// <param name="trees">list of trees</param>
    /// <param name="treePrefab">tree prefab</param>
    /// <param name="spawnObjectsAfterXTreelines">spawn enemies/obstacles after x treelines created</param>
    /// <returns></returns>
    List<GameObject> GenerateTrees(int density, float distanceBetweenTrees, GameObject parent, List<GameObject> trees, GameObject treePrefab, int spawnObjectsAfterXTreelines = 0) {
        Vector3 newPos;
        GameObject lastAddedTree = trees[trees.Count-1];
        Debug.Log(trees.Count);
        lastAddedTree = trees[trees.Count - 1];
        
        bool isTreeLine = false;
        if (parent.name.Equals("Trees"))
            isTreeLine = true;
        else
            Debug.Log("decoration trees " + density);

        for (int i = 0; i < density; i++) {
            newPos = new Vector3(lastAddedTree.transform.position.x,
                lastAddedTree.transform.position.y,
                lastAddedTree.transform.position.z + distanceBetweenTrees);

            lastAddedTree = Instantiate(treePrefab, newPos, treePrefab.transform.rotation, parent.gameObject.transform);
            lastAddedTree.name = lastAddedTree.name + " " + (i + 1);
            trees.Add(lastAddedTree);

            if(isTreeLine && spawnObjectsAfterXTreelines == 0)
                GenerateEnemiesAndObstacles(lastAddedTree);
            
            if (spawnObjectsAfterXTreelines > 0)
                spawnObjectsAfterXTreelines--;
        }
        return trees;

    }

    /// <summary>
    /// destroy objects (treelines and decoration trees) that are behind the player
    /// </summary>
    /// <param name="objects_list"></param>
    /// <returns></returns>
    List<GameObject> DestroyFromList(List<GameObject> objects_list) {
        List<GameObject> objsToDestroy = new List<GameObject>();
        float offSetToDeleteObjs = 10f;

        //browse all the objects that are behind the player (the list is already ordered by z ascending)
        foreach (GameObject obj in objects_list) {
            //destroy non visible trees to the player
            if (objects_list.Count > 1 && obj.transform.position.z+offSetToDeleteObjs < player.transform.position.z) {
                objsToDestroy.Add(obj);
            }
            else {
                break;
            }
        }

        //destruction of these trees
        foreach (GameObject objToDestroy in objsToDestroy) {
            objects_list.Remove(objToDestroy);
            Destroy(objToDestroy);
        }

        return objects_list;
    }

    /// <summary>
    /// destroy enemies and obstacles that are behind the player
    /// </summary>
    private void DestroyEnemiesAndObstacles() {
        float offSetToDeleteObjs = 10f;

        //destruction of remaining enemies that are behing the player
        List<GameObject> enemiesToDestroy = new List<GameObject>();
        List<GameObject> enemiesToRemove = new List<GameObject>();

        foreach (GameObject enemy in enemies) {
            if(enemy == null) {
                enemiesToRemove.Add(enemy);
                totalEnemiesBeaten += 1;
            }
            else if (enemy.transform.position.z + offSetToDeleteObjs < player.transform.position.z) {
                //Debug.Log(enemy.name);
                enemiesToDestroy.Add(enemy);
                totalEnemiesBeaten += 1;
            }

        }
        foreach (GameObject enemy in enemiesToDestroy) {
            enemies.Remove(enemy);
            Destroy(enemy);
        }
        foreach (GameObject enemy in enemiesToRemove) {
            enemies.Remove(enemy);
        }

        //destruction of remaining obstacles that are behing the player
        List<GameObject> obstaclesToDestroy = new List<GameObject>();
        List<GameObject> obstaclesToRemove = new List<GameObject>();

        foreach (GameObject obstacle in obstacles) {
            if(obstacle == null) {
                obstaclesToRemove.Add(obstacle);
                totalObstaclesBeaten += 1;
            }
            else if (obstacle.transform.position.z + offSetToDeleteObjs < player.transform.position.z) {
                obstaclesToDestroy.Add(obstacle);
                totalObstaclesBeaten += 1;
            }
        }
        foreach (GameObject obstacle in obstaclesToDestroy) {
            obstacles.Remove(obstacle);
            Destroy(obstacle);
        }
        foreach (GameObject obstacle in obstaclesToRemove) {
            obstacles.Remove(obstacle);
        }

    }

    /// <summary>
    /// generate enemies and obstacles on treeline
    /// </summary>
    /// <param name="treeline"></param>
    private void GenerateEnemiesAndObstacles(GameObject treeline) {

        List<string> branches = new List<string> { "BranchLeft", "BranchCenter", "BranchRight" };
        string rand_branch;

        GameObject newObj; //new enemy/obstacle

        GameObject slot;
        int nbEnemies = 0;
        int nbObstacles = 0;

        if (nbEnemiesToGenerate != nbEnemiesGenerated)
            nbEnemies = Random.Range(0, nbEnemiesMaxByTreeline+1);

        if (nbObstaclesToGenerate != nbObstaclesGenerated)
            nbObstacles = Random.Range(0, nbObstaclesMaxByTreeline+1);

        if(nbEnemies + nbObstacles > 3) {
            nbEnemies /= 2;
            nbObstacles /= 2;

            if (Random.Range(0, 2) == 0)
                nbEnemies++;
            else
                nbObstacles++;
        }

        totalEnemiesGenerated += nbEnemies;
        totalObstaclesGenerated += nbObstacles;

        //random value to offset x axis for obstacles & enemies so that can player can see them from afar
        float randomPositionOffset = 0f;

        //generate enemies
        for (int i = 0; i < nbEnemies; i++) {
            rand_branch = branches[Random.Range(0, branches.Count)];
            branches.Remove(rand_branch);
            slot = treeline.transform.Find(rand_branch).gameObject;
            randomPositionOffset = Random.Range(-0.2f, 0.2f);
            newObj = Instantiate(enemyPrefab, slot.transform.position + new Vector3(randomPositionOffset, 0.15f,0), enemyPrefab.transform.rotation, enemiesParent.gameObject.transform);
            newObj.transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
            newObj.name = newObj.name + " " + (i + 1);
            enemies.Add(newObj);
        }


        //generate obstacles
        for (int i = 0; i < nbObstacles; i++) {
            rand_branch = branches[Random.Range(0, branches.Count)];
            branches.Remove(rand_branch);
            slot = treeline.transform.Find(rand_branch).gameObject;
            randomPositionOffset = Random.Range(-0.2f, 0.2f);
            newObj = Instantiate(obstaclePrefab, slot.transform.position + new Vector3(randomPositionOffset, 0.15f, 0), obstaclePrefab.transform.rotation, obstaclesParent.gameObject.transform);
            newObj.name = newObj.name + " " + (i + 1);
            obstacles.Add(newObj);
        }

    }

    /// <summary>
    /// level generation on update after calibration phase
    /// </summary>
    private void LevelGeneration() {
        //TO DO : UpdateDifficulty
        Debug.Log("levelgeneration ---");
        Debug.Log("playerLevel " + playerProfile.playerLevel);
        Debug.Log("lvl " + (int)playerProfile.playerLevel / 20);

        readGameLevel(levels[(int)playerProfile.playerLevel / 20]);
        //update values to generate
        nbObstaclesToGenerate = Random.Range(nbObstaclesMin, nbObstaclesMax + 1);
        nbEnemiesToGenerate = Random.Range(nbEnemiesMin, nbEnemiesMax + 1);
        //Debug.Log("nbObstaclesToGenerate : " + nbObstaclesToGenerate);
        //Debug.Log("nbEnemiesToGenerate : " + nbEnemiesToGenerate);

        nbObstaclesGenerated = 0;
        treelines = GenerateTrees(treelineDensity, distanceBetweenTreelines, treesParent, treelines, treelinePrefab);
        decorationTrees = GenerateTrees(decorationTreesDensity, distanceBetweenDecorationTrees, forestParent, decorationTrees, decorationTreesPrefab);
    }

    private void UpdateDifficulty() {
        //TO DO
        ////UpdateEnemiesType
    }

    private void UpdateEnemiesType(GameObject enemy, Collider collider) {
        //TO DO
    }

    void UpdateGameResults() {
        PlayerPrefs.SetInt("player_profile", 0);
        string gameResults = JsonUtility.ToJson(playerProfile);
        File.WriteAllText(Application.streamingAssetsPath + Path.DirectorySeparatorChar + "Results" + Path.DirectorySeparatorChar + "player_profile" + PlayerPrefs.GetInt("player_profile") + ".json", gameResults);
    }

    /// <summary>
    /// Moves the player forward automatically (and background too)
    /// </summary>
    /// <param name="movingSpeed">the moving speed</param>
    /// <param name="distanceBetweenTreelines">distance between each tree rows</param>
    /// <param name="treelines">reference to treelines list</param>
    public void AutomaticMoveForward(float movingSpeed, float distanceBetweenTreelines, List<GameObject> treelines) {
        float yOffset = 0.01f; //allows to simulate a jump
        float treeDetectionWidth = 0.1f;

        for (int i = 0; i < treelines.Count - 1; i++) {
            if (player.transform.position.z >= treelines[i].transform.position.z - treeDetectionWidth && player.transform.position.z < treelines[i].transform.position.z + distanceBetweenTreelines / 2) {
                //if on branch or between branch and middle of distance with next branch => jump
                break;
            }
            else if (player.transform.position.z > treelines[i].transform.position.z + distanceBetweenTreelines / 2 && player.transform.position.z <= treelines[i + 1].transform.position.z - treeDetectionWidth) {
                //if above middle of distance with next branch => simulate gravity
                yOffset *= -1.098f;
                break;
            }
        }

        player.transform.position = new Vector3(player.transform.position.x, player.transform.position.y + yOffset, player.transform.position.z + movingSpeed);


        //move background with player on z axis
        background.transform.position = new Vector3(
            background.transform.position.x,
            background.transform.position.y,
            player.transform.position.z
        );
    }

    /// <summary>
    /// Updates the timer shown in game
    /// </summary>
    void UpdateTimer() {
        timer += Time.deltaTime;
        minutes = Mathf.FloorToInt(timer / 60);
        seconds = Mathf.RoundToInt(timer % 59);

        if(seconds < 10)
            timerText.GetComponent<TextMeshProUGUI>().text = "0"+minutes + ":0"+seconds;
        else
            timerText.GetComponent<TextMeshProUGUI>().text = "0"+minutes + ":" + seconds;

        canvasTimer.transform.position = new Vector3(canvasTimer.transform.position.x, canvasTimer.transform.position.y, canvasTimer.transform.position.z + playerAutomaticMovingSpeed);
    }

    void ShowUnshowMenuPanel() {
        menuPanel.SetActive(!menuPanel.activeSelf);
    }

    /// <summary>
    /// Starts new game (called in title screen menu button)
    /// </summary>
    public void StartNewGame() {
        PlayerPrefs.SetInt("player_profile", -1);
        SceneManager.LoadScene(1);
    }

    /// <summary>
    /// Starts a game based on a profile (called in title screen menu button)
    /// </summary>
    public void ContinueGame() {
        PlayerPrefs.SetInt("player_profile", 0);
        SceneManager.LoadScene(1);
    }


    /// <summary>
    /// Coroutine to resume game after a certain time after playing an animation to warn the player about it
    /// </summary>
    /// <param name="seconds">the number of seconds after which the game will resume</param>
    /// <returns></returns>
    public IEnumerator ResumeGameAfter(float seconds) {
        ResumeGameNotification.SetActive(true);
        ResumeGameNotification.GetComponent<Animator>().SetTrigger("ResumeGame");
        currentlyResumingGame = true;
        yield return new WaitForSecondsRealtime(seconds);
        currentlyResumingGame = false;
        ResumeGameNotification.SetActive(false);

        gamePaused = false;
        Time.timeScale = 1;
    }

    /// <summary>
    /// Pauses game and shows menu
    /// </summary>
    void PauseGame() {
        gamePaused = true;
        playerController.PauseUnpauseGame();
        ShowUnshowMenuPanel();
        Time.timeScale = 0;
    }
    /// <summary>
    /// Resumes the game after changing the needed elements
    /// </summary>
    public void ResumeGame() {
        StartCoroutine(ResumeGameAfter(timeforResumingGame));
        playerController.PauseUnpauseGame();
        ShowUnshowMenuPanel();
    }

    /// <summary>
    /// Reloads Scene when pressing Retry button
    /// </summary>
    public void Retry() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    /// <summary>
    /// Pauses game, changes menu text to Game Over and hide Resume button
    /// </summary>
    public void GameOver() {
        gamePaused = true;
        menuPanel.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = "GAME OVER";
        menuPanel.transform.GetChild(1).gameObject.SetActive(true); //show feedback
        menuPanel.transform.GetChild(2).gameObject.SetActive(false); //hide resume button

        if (currentLevel > 0 && currentLevel < levels.Count) {
            playerProfile.playerLevel -= 20;
        }
        //TO DO : save player category & save game result

        ShowUnshowMenuPanel();
    }

    private void readGameLevel(string JSONfile) {
        Debug.Log("niveau : " + JSONfile);
        string jsonFile = File.ReadAllText(Application.streamingAssetsPath + Path.DirectorySeparatorChar + "Levels" + Path.DirectorySeparatorChar + JSONfile + ".json");
        GameLevel level = JsonUtility.FromJson<GameLevel>(jsonFile);
        //update game manager
        playerAutomaticMovingSpeed = level.playerAutomaticMovingSpeed;
        //trees
        treelineDensity = level.treelineDensity;
        distanceBetweenTreelines = level.distanceBetweenTreelines;
        //enemies
        nbEnemiesMin = level.nbEnemiesMin;
        nbEnemiesMax = level.nbEnemiesMax;
        enemyMinDamage = level.enemyMinDamage;
        enemyMaxDamage = level.enemyMaxDamage;
        nbEnemiesMaxByTreeline = level.nbEnemiesMaxByTreeline;
        verticalEnemiesPerc = level.verticalEnemiesPerc;
        horizontalEnemiesPerc = level.horizontalEnemiesPerc;
        //obstacles
        nbObstaclesMin = level.nbObstaclesMin;
        nbObstaclesMax = level.nbObstaclesMax;
        obstacleMinDamage = level.obstacleMinDamage;
        obstacleMinDamage = level.obstacleMinDamage;
        nbObstaclesMaxByTreeline = level.nbObstaclesMaxByTreeline;

        //update player controller
        playerController.fireRate = level.playerFireRate;
        playerController.invinciblityFrame = level.invinciblityFrame; 
        playerController.regenDelay = level.regenDelay;

        //update enemy controller
        enemyPrefab.GetComponent<EnemyController>().fireRate = level.enemyFireRate;
    }

}