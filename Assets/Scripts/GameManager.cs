using System.Collections.Generic;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour {
    public GameObject player; //XR Origin (Rig)
    public float playerAutomaticMovingSpeed = 0.04f;
    private PlayerController playerController;
    private float depthSpeed;
    private float timeStep;

    [Header("General Game properties")]
    public float timer; 
    private int minutes;
    private int seconds;
    private bool gamePaused = false;

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
                //enemies = DestroyFromList(enemies);
                //obstacles = DestroyFromList(obstacles);
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
        else if (playerController.health > 0 && gamePaused) { 
            if (displayMenuReference.action.triggered) {
                ResumeGame();
            }
        }
        //game ended
        else if (playerController.health <= 0 && !gamePaused) {
            gamePaused = true;
            menuPanel.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = "GAME OVER";
            ShowUnshowMenuPanel();
        }
    }


    List<GameObject> GenerateTrees(int density, float distanceBetweenTrees, GameObject parent, List<GameObject> trees, GameObject treePrefab) {
        Vector3 newPos;
        GameObject lastAddedTree = trees[trees.Count-1];

        for (int i = 0; i < density; i++) {
            newPos = new Vector3(lastAddedTree.transform.position.x,
                lastAddedTree.transform.position.y,
                lastAddedTree.transform.position.z + distanceBetweenTrees);

            lastAddedTree = Instantiate(treePrefab, newPos, treePrefab.transform.rotation, parent.gameObject.transform);
            lastAddedTree.name = lastAddedTree.name + " " + (i + 1);
            trees.Add(lastAddedTree);
            GenerateEnemiesAndObstacles(lastAddedTree);

        }
        return trees;

    }

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

    //generate enemies and obstacles on treeline
    private void GenerateEnemiesAndObstacles(GameObject treeline) {
        int nb = 0; //nb of enemies/obstacles to generate on treeline
        Vector3 newPos;
        //Quaternion enemyRot = Quaternion.Euler(0, 180, 0);
        Quaternion obstacleRot = Quaternion.Euler(7.761f, 2.33f, 3.05f);

        //random branch positioning
        float left_x = -2.4f;
        float middle_x = 0;
        float right_x = 2.4f;

        List<float> branches = new List<float> { left_x, middle_x, right_x };
        float rand_x;

        GameObject newObj; //new enemy/obstacle

        if (nbEnemiesToGenerate != nbEnemiesGenerated) {
            nb = Random.Range(0, nbEnemiesMaxByTreeline);

            for (int i = 0; i < nb; i++) {
                rand_x = branches[Random.Range(0, 2)];

                newPos = new Vector3(rand_x,
                    enemyPrefab.transform.position.y,
                    enemyPrefab.transform.position.z + distanceBetweenTreelines);

                newObj = Instantiate(enemyPrefab, newPos, enemyPrefab.transform.rotation, enemiesParent.gameObject.transform);
                //newObj.transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                newObj.name = newObj.name + " " + (i + 1);
                enemies.Add(newObj);
            }

        }
        if(nbObstaclesToGenerate != nbObstaclesGenerated) {
            nb = Random.Range(0, nbObstaclesMaxByTreeline);

            for (int i = 0; i < nb; i++) {
                rand_x = branches[Random.Range(0, 2)];

                newPos = new Vector3(rand_x,
                    obstaclePrefab.transform.position.y,
                    obstaclePrefab.transform.position.z + distanceBetweenTreelines);

                newObj = Instantiate(obstaclePrefab, newPos, obstacleRot, obstaclesParent.gameObject.transform);
                newObj.name = newObj.name + " " + (i + 1);
                obstacles.Add(newObj);
            }
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

    void PauseGame() {
        gamePaused = true;
        playerController.PauseUnpauseGame();
        ShowUnshowMenuPanel();
    }

    void ResumeGame() {
        gamePaused = false;
        playerController.PauseUnpauseGame();
        ShowUnshowMenuPanel();
    }

    public void Retry() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

}