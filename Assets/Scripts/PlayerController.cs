using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayerController : MonoBehaviour {


    public InputActionReference moveReference = null;
    public TextMeshProUGUI nbLivesUI;

    [Header("Left Hand Projectile parameters")]
    public InputActionReference throwProjectileReference = null;
    public Transform leftHandOrigin; //not really the leftHand but its Ray Origin (which is its child object)
    public GameObject projectilePrefab;
    public float projectileSpeed = 30f;
    public float fireRate = 10f;
    //private elements
    private float nextTimeToFire = 0f;
    private XRInteractorLineVisual leftHandLineVisual;
    private Gradient validGradient;
    private Gradient invalidGradient;
    private Gradient reloadGradient;

    [Header("Player properties")]
    public float health = 3f;
    public float damage = 1f;
    public float dashSpeed = 1f;
    private Vector3 targetPos;

    public GameObject rightHand;
    //public GameObject impactEffect;



    void Start() {
        //left hand ray color management
        leftHandLineVisual = leftHandOrigin.parent.GetComponent<XRInteractorLineVisual>();
        validGradient = leftHandLineVisual.validColorGradient;
        invalidGradient = leftHandLineVisual.invalidColorGradient;
        reloadGradient = new Gradient {
            colorKeys = new[] { new GradientColorKey(new Color(0.9F, 0.32F, 0F), 0f), new GradientColorKey(new Color(1F, 0F, 0F), 1f) },
            alphaKeys = new[] { new GradientAlphaKey(1f, 0f), new GradientAlphaKey(1f, 1f) },
        };

        nbLivesUI.text = health.ToString();
    }

    // Update is called once per frame
    void Update() {
        if (health > 0) {
            //move left or right
            DashTowardsTarget();

            if (moveReference.action.triggered) {
                UpdateDashPosition(moveReference.action.ReadValue<Vector2>());
            }

            //shoot projectile if not reloading
            if (Time.time >= nextTimeToFire) {
                ChangeLineColor(false); //affectation done even when not needed : to change if possible

                if (throwProjectileReference.action.triggered) {
                    nextTimeToFire = Time.time + 1f / fireRate;
                    ThrowProjectile();
                    ChangeLineColor(true);
                }
            }
        }

    }

    /// <summary>
    /// Changes the line color from left controller depending on the reloading status
    /// </summary>
    /// <param name="isReloading">is the player reloading</param>
    private void ChangeLineColor(bool isReloading) {
        if (isReloading) {
            leftHandLineVisual.invalidColorGradient = reloadGradient;
            leftHandLineVisual.validColorGradient = reloadGradient;
        }
        else {
            leftHandLineVisual.invalidColorGradient = invalidGradient;
            leftHandLineVisual.validColorGradient = validGradient;
        }
    }

    /// <summary>
    /// Moves the player forward automatically
    /// </summary>
    /// <param name="movingSpeed">the moving speed</param>
    /// <param name="distanceBetweenTreelines">distance between each tree rows</param>
    /// <param name="treelines">reference to treelines list</param>
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

    /// <summary>
    /// Updates the target position (called when left joystick is triggered)
    /// </summary>
    /// <param name="joystickVect"> if negative => left, else => right</param>
    void UpdateDashPosition(Vector2 joystickVect) {
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

    /// <summary>
    /// Makes the player move to the target defined in UpdateDashPosition()
    /// </summary>
    void DashTowardsTarget() {
        if (transform.position.x != targetPos.x) {
            targetPos = new Vector3(targetPos.x, transform.position.y, transform.position.z);
            transform.position = Vector3.MoveTowards(transform.position, targetPos, dashSpeed * Time.deltaTime);
        }
    }

    public void ThrowProjectile() {
        /*RaycastHit hit;

        bool touchObject = Physics.Raycast(leftHand.position, leftHand.rotation*Vector3.forward, out hit, projectileRange);

        if (touchObject) {
            //see attackable tiles within selectable tiles
            if (hit.transform.gameObject.tag == "Enemy") {
                Debug.Log("raycast touched enemy");
                //hit.transform.GetComponent<EnemyController>().TakeDamage(damage);
            }
            else {
                Debug.Log("raycast touched "+ hit.transform.gameObject.name);
            }
        }*/

        GameObject projectileObj = Instantiate(projectilePrefab, leftHandOrigin.position, Quaternion.identity) as GameObject;
        projectileObj.GetComponent<Rigidbody>().velocity = ((leftHandOrigin.rotation * Vector3.forward)).normalized * projectileSpeed;
    }

    private void OnCollisionEnter(Collision collision) {
        Debug.Log("collision with "+ collision.gameObject.name);
        if (collision.gameObject.tag == "Enemy" || collision.gameObject.tag == "Obstacle") {
            TakeDamage(1f);
        }
    }

    public void TakeDamage(float amount) {
        Debug.Log("damaged");
        health -= amount;
        nbLivesUI.text = health.ToString();
        if (health <= 0f) {
            Die();
        }
    }

    void Die() {
        Debug.Log("You lost");
        rightHand.GetComponent<XRRayInteractor>().enabled = true;
    }

}