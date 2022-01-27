using System.Collections.Generic;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.InputSystem;
using System.Collections;

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

    [Header("Treeline platforms for all agents")]
    public GameObject treelinePrefab;
    public GameObject treesParent; //parent of treelines
    public int treelineDensity; //nb of treelines to instantiate //10
    private float distanceBetweenTreelines = 4;
    private List<GameObject> treelines;

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

    // Start is called before the first frame update
    void Start() {
        Time.timeScale = 1; //if == 0 : game pauses
        playerController = player.GetComponent<PlayerController>();
        
        //enemies
        nbEnemiesMin = 5;
        nbEnemiesMax = 10;
        nbEnemiesMaxByTreeline = 2;

        nbEnemiesGenerated = 0;
        nbEnemiesToGenerate = Random.Range(nbEnemiesMin, nbEnemiesMax);

        enemies = new List<GameObject>();
        foreach (Transform child in enemiesParent.transform) {
            enemies.Add(child.gameObject);
        }
        
        //obstacles
        nbObstaclesMin = 5;
        nbObstaclesMax = 10;
        nbObstaclesMaxByTreeline = 2;

        nbObstaclesGenerated = 0;
        nbObstaclesToGenerate = Random.Range(nbObstaclesMin, nbObstaclesMax);

        obstacles = new List<GameObject>();
        foreach (Transform child in obstaclesParent.transform) {
            obstacles.Add(child.gameObject);
        }

        //treeline platforms
        treelines = new List<GameObject>();
        foreach (Transform child in treesParent.transform) {
            treelines.Add(child.gameObject);
        }
        treelines = GenerateTrees(treelineDensity, distanceBetweenTreelines, treesParent, treelines, treelinePrefab);

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
            playerController.AutomaticMoveForward(playerAutomaticMovingSpeed, distanceBetweenTreelines, treelines);
            //move background with player on z axis
            background.transform.position = new Vector3(
                background.transform.position.x,
                background.transform.position.y,
                player.transform.position.z);

            //pause game by clicking on left hand button menu
            if (displayMenuReference.action.triggered) {
                PauseGame();
            }

            //Generate or destroy treeline platforms & enemies/obstacles
            if (treelines.Count < treelineDensity) {
                nbObstaclesGenerated = 0;
                nbObstaclesToGenerate = Random.Range(nbObstaclesMin, nbObstaclesMax);
                treelines = GenerateTrees(treelineDensity, distanceBetweenTreelines, treesParent, treelines, treelinePrefab);
            }
            else {
                treelines = DestroyFromList(treelines);
                DestroyEnemiesAndObstacles();
            }

            //Generate or destroy decoration trees
            if (decorationTrees.Count < decorationTreesDensity) {
                decorationTrees = GenerateTrees(decorationTreesDensity, distanceBetweenDecorationTrees, forestParent, decorationTrees, decorationTreesPrefab);
            }
            else {
                decorationTrees = DestroyFromList(decorationTrees);
            }

            UpdateTime();
        }
        //game paused
        else if (playerController.health > 0 && gamePaused && !currentlyResumingGame) { 
            if (displayMenuReference.action.triggered) {
                ResumeGame();
            }
        }
        //game ended
        else if (playerController.health <= 0 && !gamePaused) {
            gamePaused = true;
            menuPanel.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = "GAME OVER";
            menuPanel.transform.GetChild(1).gameObject.SetActive(false); //hide resume button
            ShowUnshowMenuPanel();
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
    /// <returns></returns>
    List<GameObject> GenerateTrees(int density, float distanceBetweenTrees, GameObject parent, List<GameObject> trees, GameObject treePrefab) {
        Vector3 newPos;
        GameObject lastAddedTree = trees[trees.Count-1];
        bool isTreeLine = false;
        if (parent.name.Equals("Trees"))
            isTreeLine = true;

        for (int i = 0; i < density; i++) {
            newPos = new Vector3(lastAddedTree.transform.position.x,
                lastAddedTree.transform.position.y,
                lastAddedTree.transform.position.z + distanceBetweenTrees);

            lastAddedTree = Instantiate(treePrefab, newPos, treePrefab.transform.rotation, parent.gameObject.transform);
            lastAddedTree.name = lastAddedTree.name + " " + (i + 1);
            trees.Add(lastAddedTree);
            if(isTreeLine)
                GenerateEnemiesAndObstacles(lastAddedTree);
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
        foreach (GameObject enemy in enemies) {
            if (enemy != null && enemy.transform.position.z + offSetToDeleteObjs < player.transform.position.z) {
                //Debug.Log(enemy.name);
                enemiesToDestroy.Add(enemy);
            }
        }
        foreach (GameObject enemy in enemiesToDestroy) {
            enemies.Remove(enemy);
            Destroy(enemy);
        }

        //destruction of remaining obstacles that are behing the player
        List<GameObject> obstaclesToDestroy = new List<GameObject>();
        foreach (GameObject obstacle in obstacles) {
            if (obstacle != null && obstacle.transform.position.z + offSetToDeleteObjs < player.transform.position.z) {
                obstaclesToDestroy.Add(obstacle);
            }
        }
        foreach (GameObject obstacle in obstaclesToDestroy) {
            obstacles.Remove(obstacle);
            Destroy(obstacle);
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
            nbEnemies = Random.Range(0, nbEnemiesMaxByTreeline);

        if (nbObstaclesToGenerate != nbObstaclesGenerated)
            nbObstacles = Random.Range(0, nbObstaclesMaxByTreeline);

        if(nbEnemies + nbObstacles > 3) {
            nbEnemies /= 2;
            nbObstacles /= 2;

            if (Random.Range(0, 1) == 0)
                nbEnemies++;
            else
                nbObstacles++;
        }

        //generate enemies
        for (int i = 0; i < nbEnemies; i++) {
            rand_branch = branches[Random.Range(0, branches.Count-1)];
            branches.Remove(rand_branch);
            slot = treeline.transform.Find(rand_branch).gameObject;
            newObj = Instantiate(enemyPrefab, slot.transform.position + new Vector3(0,0.15f,0), enemyPrefab.transform.rotation, enemiesParent.gameObject.transform);
            newObj.transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
            newObj.name = newObj.name + " " + (i + 1);
            enemies.Add(newObj);
        }


        //generate obstacles
        for (int i = 0; i < nbObstacles; i++) {
            rand_branch = branches[Random.Range(0, branches.Count - 1)];
            branches.Remove(rand_branch);
            slot = treeline.transform.Find(rand_branch).gameObject;
            newObj = Instantiate(obstaclePrefab, slot.transform.position + new Vector3(0, 0.15f, 0), obstaclePrefab.transform.rotation, obstaclesParent.gameObject.transform);
            newObj.name = newObj.name + " " + (i + 1);
            obstacles.Add(newObj);
        }

    }

    private void LevelGeneration() {
        //TO DO
    }

    private void UpdateDifficulty() {
        //TO DO
    }

    private void UpdateEnemiesType(GameObject enemy, Collider collider) {
        //TO DO
    }

    /// <summary>
    /// Updates the timer shown in game
    /// </summary>
    void UpdateTime() {
        timer += Time.deltaTime;
        minutes = Mathf.FloorToInt(timer / 60);
        seconds = Mathf.RoundToInt(timer % 60);

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
    /// Starts game (called in title screen menu button)
    /// </summary>
    public void StartGame() {
        SceneManager.LoadScene(1);
    }

    void PauseGame() {
        gamePaused = true;
        playerController.PauseUnpauseGame();
        ShowUnshowMenuPanel();
        Time.timeScale = 0;
    }

    /// <summary>
    /// Coroutine to resume game after a certain time after playing an animation to warn the player about it
    /// </summary>
    /// <param name="seconds">the number of seconds after which the game will resume</param>
    /// <returns></returns>
    public IEnumerator ResumeGameAfter(float seconds) {
        Debug.Log("resumeAfter");
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

}