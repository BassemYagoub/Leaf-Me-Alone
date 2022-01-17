using System.Collections.Generic;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.InputSystem;

public class GameManager : MonoBehaviour {
    public GameObject player; //XR Origin (Rig)
    public float playerAutomaticMovingSpeed = 0.04f;
    private PlayerController playerController;

    [Header("General Game properties")]
    public float timer; 
    private int minutes;
    private int seconds;
    private bool gamePaused = false;

    [Header("Treeline platforms for all agents")]
    public GameObject treelinePrefab;
    public GameObject trees; //parent of treelines
    public int treelineDensity; //nb of treelines to instantiate //10
    private float distanceBetweenTreelines = 4;
    private List<GameObject> treelines;

    [Header("Background trees for decoration")]
    public GameObject decorationTreesPrefab;
    public GameObject forest; //parent of decoration trees
    public int decorationTreesDensity; //nb of decoration trees to instantiate //4
    private float distanceBetweenDecorationTrees = 3;
    private List<GameObject> decorationTrees;


    [Header("UI Elements")]
    public GameObject menuPanel;
    public GameObject canvasTimer;
    public GameObject timerText;
    public InputActionReference displayMenuReference = null;

    // Start is called before the first frame update
    void Start() {
        playerController = player.GetComponent<PlayerController>();

        //treeline platforms
        treelines = new List<GameObject>();
        foreach (Transform child in trees.transform) {
            treelines.Add(child.gameObject);
        }
        treelines = GenerateTrees(treelineDensity, distanceBetweenTreelines, trees, treelines, treelinePrefab);

        //decoration trees
        decorationTrees = new List<GameObject>();
        foreach (Transform child in forest.transform) {
            decorationTrees.Add(child.gameObject);
        }
        decorationTrees = GenerateTrees(decorationTreesDensity, distanceBetweenDecorationTrees, forest, decorationTrees, decorationTreesPrefab);
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

            //Generate or destroy treeline platforms
            if (treelines.Count < treelineDensity) {
                treelines = GenerateTrees(treelineDensity, distanceBetweenTreelines, trees, treelines, treelinePrefab);
            }
            else {
                treelines = DestroyTrees(treelines);
            }

            //Generate or destroy decoration trees
            if (decorationTrees.Count < decorationTreesDensity) {
                decorationTrees = GenerateTrees(decorationTreesDensity, distanceBetweenDecorationTrees, forest, decorationTrees, decorationTreesPrefab);
            }
            else {
                decorationTrees = DestroyTrees(decorationTrees);
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

            lastAddedTree = Instantiate(treePrefab, newPos, treePrefab.transform.rotation);
            lastAddedTree.name = lastAddedTree.name + " " + (i + 1);
            lastAddedTree.transform.parent = parent.gameObject.transform;
            trees.Add(lastAddedTree);

        }
        return trees;

    }

    List<GameObject> DestroyTrees(List<GameObject> treeList) {
        List<GameObject> treelinesToDestroy = new List<GameObject>();
        float offSetToDeleteTrees = 10f;

        //browse all the trees that are behind the player (the list of treelines is already ordered by z ascending)
        foreach (GameObject treeline in treeList) {
            //destroy non visible trees to the player
            if (treeList.Count > 1 && treeline.transform.position.z+offSetToDeleteTrees < player.transform.position.z) {
                treelinesToDestroy.Add(treeline);
            }
            else {
                break;
            }
        }

        //destruction of these trees
        foreach (GameObject treelineToDestroy in treelinesToDestroy) {
            treeList.Remove(treelineToDestroy);
            Destroy(treelineToDestroy);

        }
        return treeList;
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