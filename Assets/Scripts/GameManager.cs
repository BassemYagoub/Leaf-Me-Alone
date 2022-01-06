using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public GameObject player; //XR Origin (Rig)

    [Header("Treeline platforms for all agents")]
    public GameObject treelinePrefab;
    public GameObject lastAddedTreeline;
    public GameObject trees; //parent of treelines
    public int treelineDensity; //nb of treelines to instantiate //10
    private float distanceBetweenTreelines = 4;
    private List<GameObject> treelines;

    [Header("Background trees for decoration")]
    public GameObject decorationTreesPrefab;
    public GameObject lastAddedDecorationTrees;
    public GameObject forest; //parent of decoration trees
    public int decorationTreesDensity; //nb of decoration trees to instantiate //4
    private float distanceBetweenDecorationTrees = 3;
    private List<GameObject> decorationTrees;

    // Start is called before the first frame update
    void Start()
    {
        //treeline platforms
        treelines = new List<GameObject>();
        foreach(Transform child in trees.transform) {
            treelines.Add(child.gameObject);
        }
        GenerateTrees(treelineDensity, lastAddedTreeline, distanceBetweenTreelines, trees, treelines, treelinePrefab);

        //decoration trees
        decorationTrees = new List<GameObject>();
        foreach (Transform child in forest.transform) {
            decorationTrees.Add(child.gameObject);
        }
        GenerateTrees(decorationTreesDensity, lastAddedDecorationTrees, distanceBetweenDecorationTrees, forest, decorationTrees, decorationTreesPrefab);


    }

    // Update is called once per frame
    void Update()
    {

        //Generate new trees
        if (treelines.Count < treelineDensity) {
            //treeline platforms
            GenerateTrees(treelineDensity, lastAddedTreeline, distanceBetweenTreelines, trees, treelines, treelinePrefab);
            //decoration trees
            GenerateTrees(decorationTreesDensity, lastAddedDecorationTrees, distanceBetweenDecorationTrees, forest, decorationTrees, decorationTreesPrefab);
        }

        //Destroy trees if non visible to player
        else {
            //treeline platforms
            DestroyTrees(treelines);
            //decoration trees
            DestroyTrees(decorationTrees);
        }
    }


    void GenerateTrees(int density, GameObject lastAddedTree, float distanceBetweenTrees, GameObject parent, List<GameObject> trees, GameObject treePrefab) {
        Vector3 newPos;

        for (int i = 0; i < density; i++) {
            newPos = new Vector3(lastAddedTree.transform.position.x,
                lastAddedTree.transform.position.y,
                lastAddedTree.transform.position.z + distanceBetweenTrees);

            lastAddedTree = Instantiate(treePrefab, newPos, treePrefab.transform.rotation);
            lastAddedTree.transform.parent = parent.gameObject.transform;
            trees.Add(lastAddedTree);

        }
    
    }

    void DestroyTrees(List<GameObject> treeList) {
        List<GameObject> treelinesToDestroy = new List<GameObject>();

        //browse all the trees that are behind the player (the list of treelines is already ordered by z ascending)
        foreach (GameObject treeline in treeList) {
            if(treeline.transform.position.z < player.transform.position.z) {
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

    }

}
