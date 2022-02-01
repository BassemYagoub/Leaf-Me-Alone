using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class GameLevel
{
    //general
    public float playerAutomaticMovingSpeed; // = 0.04f;
    public float invinciblityFrame; // = .5f;
    public float regenDelay; //= 5f;
    public float playerFireRate; //= 10;
    //trees
    public int treelineDensity; //nb of treelines to instantiate //10
    public float distanceBetweenTreelines; // = 4;
    //enemies
    public int nbEnemiesMin;
    public int nbEnemiesMax;
    public float enemyMinDamage;
    public float enemyMaxDamage;
    public int nbEnemiesMaxByTreeline;
    public float enemyFireRate; //= 1f;
    //obstacles
    public int nbObstaclesMin;
    public int nbObstaclesMax;
    public float obstacleMinDamage;
    public float obstacleMaxDamage;
    public int nbObstaclesMaxByTreeline;
}
