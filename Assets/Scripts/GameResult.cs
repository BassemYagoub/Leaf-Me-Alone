using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

[Serializable]
public class GameResult
{
    public float timePlayed;
    public long dateOfPlay;
    public int playerLevel;
    public int nbEnemies;
    public int nbEnemiesBeaten;
    public int nbObstacles;
    public int nbObstaclesBeaten;
    public int nbVerticalEnemies;
    public int nbVerticalEnemiesBeaten;
    public int nbHorizontalEnemies;
    public int nbHorizontalEnemiesBeaten;

    //katana pos/rotation
    Vector3 initialPosKatana = new Vector3(-1000, -1000, -1000);
    Quaternion initialRotationKatana = new Quaternion(-1000, -1000, -1000, -1000);
    float posDiff = -1;
    float rotDiff = -1;
    float posKatanaThreshold = 5f;
    float rotKatanaThreshold = 5f;
    public float verificationTime = 2f;

    public void IsPlayerMovingKatanaEnough(Vector3 posKatana, Quaternion rotationKatana) {
        if (Vector3.Distance(initialPosKatana, new Vector3(-1000, -1000, -1000)) == 0) {
            initialPosKatana = posKatana;
            initialRotationKatana = rotationKatana;
        }
        else {
            posDiff = Vector3.Distance(initialPosKatana, posKatana);
            rotDiff = 1 - Mathf.Abs(Quaternion.Dot(initialRotationKatana, rotationKatana));
            Debug.Log("posdiff: "+posDiff);
            Debug.Log("rotdiff: " + rotDiff);
            if (posDiff < posKatanaThreshold || rotDiff < rotKatanaThreshold) {
                //TurnEnemiesTowardsPlayer();
            }
        }

    }

}
