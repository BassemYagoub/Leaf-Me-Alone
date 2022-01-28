using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayerController : MonoBehaviour {


    public InputActionReference moveReference = null;
    public TextMeshProUGUI nbLivesUI;
    private bool gamePaused = false;

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
    public float maxHealth = 3f;
    public float health;
    public float damage = 1f;
    public float dashSpeed = 1f;
    public float invinciblityFrame = .5f;
    public float regenDelay = 5f;
    private float lastImpactTime = -1f;
    private Vector3 targetPos;
    private bool dashing = false;

    public GameObject rightHand;



    void Start() {
        health = maxHealth;

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
        if (health > 0 && !gamePaused) {
            //move left or right
            DashTowardsTarget();
            AutomaticHPRegen();

            if (moveReference.action.triggered && !dashing) {
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
            if (transform.position.z >= treelines[i].transform.position.z - treeDetectionWidth && transform.position.z < treelines[i].transform.position.z + distanceBetweenTreelines / 2) {
                //if on branch or between branch and middle of distance with next branch => jump
                break;
            }
            else if (transform.position.z > treelines[i].transform.position.z + distanceBetweenTreelines / 2 && transform.position.z <= treelines[i + 1].transform.position.z - treeDetectionWidth) {
                //if above middle of distance with next branch => simulate gravity
                yOffset *= -1.098f;
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
        dashing = true;

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
        else {
            dashing = false;
        }
    }

    /// <summary>
    /// Instantiates a shuriken and throws it from the left hand
    /// </summary>
    public void ThrowProjectile() {
        GameObject projectileObj = Instantiate(projectilePrefab, leftHandOrigin.position, Quaternion.identity) as GameObject;
        projectileObj.GetComponent<Rigidbody>().velocity = ((leftHandOrigin.rotation * Vector3.forward)).normalized * projectileSpeed;
    }

    /// <summary>
    /// Player takes damage after hitting something
    /// </summary>
    /// <param name="collision">the object that hit the player</param>
    private void OnCollisionEnter(Collision collision) {
        Debug.Log("collision with "+ collision.gameObject.name);
        if (collision.gameObject.tag == "Enemy" || collision.gameObject.tag == "Obstacle") {
            TakeDamage(1f);
        }
    }

    /// <summary>
    /// Updates health shown ingame
    /// </summary>
    void UpdateHealthUI() {
        nbLivesUI.text = health.ToString();
    }

    /// <summary>
    /// Deals a certain amount of damage to player
    /// </summary>
    /// <param name="amount">the amount of damage to deal</param>
    public void TakeDamage(float amount) {
        if (Time.time > lastImpactTime + invinciblityFrame) { //if not recovering => take damage
            lastImpactTime = Time.time;
            health -= amount;
            UpdateHealthUI();

            if (health <= 0f) {
                Die();
            }
        }
    }

    /// <summary>
    /// Regenerates 1 HP for player after regenDelay seconds
    /// </summary>
    void AutomaticHPRegen() {
        if (Time.time > lastImpactTime + regenDelay && health < maxHealth) {
            health++;
            UpdateHealthUI();
        }
    }

    /// <summary>
    /// Pauses everything ingame when player loses
    /// </summary>
    void Die() {
        Time.timeScale = 0; //stop all external movements/animations
        rightHand.GetComponent<XRRayInteractor>().enabled = true;
    }

    /// <summary>
    /// Pauses or Resumes game depending on the game state
    /// </summary>
    public void PauseUnpauseGame() {
        gamePaused = !gamePaused;
        if(gamePaused)
            rightHand.GetComponent<XRRayInteractor>().enabled = true; //adds a raycast on right hand to interact with UI
        else
            rightHand.GetComponent<XRRayInteractor>().enabled = false;
    }

}