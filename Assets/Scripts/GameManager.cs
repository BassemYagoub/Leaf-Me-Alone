using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class GameManager : MonoBehaviour {
    public GameObject player; //XR Origin (Rig)
    public float playerAutomaticMovingSpeed = 0.04f;
    private PlayerController playerController;

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
    public GameObject gameOverPanel;

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
        if (playerController.health > 0) {
            playerController.AutomaticMoveForward(playerAutomaticMovingSpeed, distanceBetweenTreelines, treelines);

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
        }
        else if (!gameOverPanel.activeSelf) {
            ShowGameOverPanel();
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

    void ShowGameOverPanel() {
        gameOverPanel.SetActive(true);
    }

    public void Retry() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

}