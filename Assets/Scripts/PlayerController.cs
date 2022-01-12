using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour {


    public InputActionReference moveReference = null;

    public float damage = 10f;
    public float range = 100f;
    public float fireRate = 15f;
    public float impactForce = 30f;
    public float dashSpeed = 1f;
    private Vector3 targetPos;

    public Camera fpscamera;
    public GameObject impactEffect;

    private float nextTimeToFire = 0f;
    private Gamepad gamepad;


    void Start() {
        gamepad = Gamepad.current;
    }

    // Update is called once per frame
    void Update() {
        if (transform.position.x != targetPos.x) {
            targetPos = new Vector3(targetPos.x, transform.position.y, transform.position.z);
            transform.position = Vector3.MoveTowards(transform.position, targetPos, dashSpeed * Time.deltaTime);
        }

        if (moveReference.action.triggered) {
            MoveLeftOrRight(moveReference.action.ReadValue<Vector2>());
        }

        /*if (gamepad == null)
            return; // No gamepad connected.

        if (gamepad.yButton.isPressed && Time.time >= nextTimeToFire) {
            Debug.Log("button pressed");
            nextTimeToFire = Time.time + 1f / fireRate;
            Shoot();
        }*/

    }

    public void AutomaticMoveForward(float movingSpeed, float distanceBetweenTreelines, List<GameObject> treelines) {
        float yOffset = 0.01f; //allows to simulate a jump
        float treeDetectionWidth = 0.1f;

        for (int i = 0; i < treelines.Count - 1; i++) {
            if (transform.position.z >= treelines[i].transform.position.z - treeDetectionWidth && transform.position.z <= treelines[i].transform.position.z + distanceBetweenTreelines / 2) {
                //if on branch or between branch and middle of distance with next branch => jump
                break;
            }
            else if (transform.position.z > treelines[i].transform.position.z + distanceBetweenTreelines / 2 && transform.position.z <= treelines[i + 1].transform.position.z - treeDetectionWidth) {
                //if above middle of distance with next branch => simulate gravity
                yOffset *= -1;
                break;
            }
        }
        
        transform.position = new Vector3(transform.position.x, transform.position.y+yOffset, transform.position.z+movingSpeed);
    }

    void MoveLeftOrRight(Vector2 joystickVect) {
        Vector3 pos = transform.position;
        float maxPos = 2.4f;
        float step = dashSpeed*Time.deltaTime;

        if (joystickVect.x > 0) { //go right
            if(pos.x < maxPos) {
                targetPos = new Vector3(pos.x + 2.4f, pos.y, pos.z);
            }
        }
        else { //go left
            if (pos.x > (-1)*maxPos) {
                targetPos = new Vector3(pos.x - 2.4f, pos.y, pos.z);
            }
        }

        //transform.position = pos;
    }

    void Shoot() {

        RaycastHit hit;
        if (Physics.Raycast(fpscamera.transform.position, fpscamera.transform.forward, out hit, range)) {
            Debug.Log(hit.transform.name);

            EnemyController target = hit.transform.GetComponent<EnemyController>();
            if (target != null) {
                target.TakeDamage(damage);
            }

            if (hit.rigidbody != null) {
                hit.rigidbody.AddForce(-hit.normal * impactForce);
            }

            //GameObject impactGO = Instantiate(impactEffect, hit.point, Quaternion.LookRotation(hit.normal));
            //Destroy(impactGO, 2f);
        }

    }
}