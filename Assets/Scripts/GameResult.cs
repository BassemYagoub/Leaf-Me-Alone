using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

[Serializable]
public class GameResult
{
    public float gameDuration;
    public string dateOfPlay;
    public float playerLevel;
    public float nbShurikenThrown = 1;
    public float nbShurikenAimed;
    public int nbEnemies;
    public int nbEnemiesBeaten;
    public int nbObstacles;
    public int nbObstaclesBeaten;
    //public int nbVerticalEnemies;
    //public int nbVerticalEnemiesBeaten;
    //public int nbHorizontalEnemies;
    //public int nbHorizontalEnemiesBeaten;

}
