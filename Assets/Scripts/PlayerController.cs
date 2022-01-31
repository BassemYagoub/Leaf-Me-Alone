using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayerController : MonoBehaviour {


    [Header("UI relative to player")]
    public InputActionReference moveReference = null;
    public TextMeshProUGUI nbLivesUI;
    public GameObject feedbackText;
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
    public float dashSpeed = 6f;
    private float dashAcceleration = -2f;
    public float invinciblityFrame = .5f;
    public float regenDelay = 5f;
    private float lastImpactTime = -1f;
    private Vector3 targetPos;
    private bool dashing = false;

    public GameObject rightHand;

    //right hand traces (katana pos/rotation)
    private Vector3 initialPosKatana = new Vector3(-1000, -1000, -1000);
    private Quaternion initialRotationKatana = new Quaternion(-1000, -1000, -1000, -1000);
    private float posDiff = -1;
    private float rotDiff = -1;
    private float movementThreshold = 0.3f;
    public float verificationTimeStep = 1f;

    public GameResult playerProfile;


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
    /// Updates the target position (called when left joystick is triggered)
    /// </summary>
    /// <param name="joystickVect"> if negative => left, else => right</param>
    void UpdateDashPosition(Vector2 joystickVect) {
        Vector3 pos = transform.position;
        float maxPos = 2.4f;
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

        dashAcceleration = -2f; //reboot dash acceleration
        //transform.position = pos;
    }

    /// <summary>
    /// Makes the player move to the target defined in UpdateDashPosition()
    /// </summary>
    void DashTowardsTarget() {
        if (transform.position.x != targetPos.x) {
            targetPos = new Vector3(targetPos.x, transform.position.y, transform.position.z);
            transform.position = Vector3.MoveTowards(transform.position, targetPos, (dashSpeed+dashAcceleration) * Time.deltaTime);
            dashAcceleration += 0.4f;
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

        //check what player is aiming at with left hand
        RaycastHit hit;
        if (Physics.Raycast(leftHandOrigin.position, leftHandOrigin.transform.forward, out hit, 30)) {
            if (hit.transform.tag == "Enemy" || hit.transform.tag == "Obstacle") {
                playerProfile.nbShurikenAimed += 1;
            }
        }

        playerProfile.nbShurikenThrown += 1;
    }

    /// <summary>
    /// Player takes damage after hitting something
    /// </summary>
    /// <param name="collision">the object that hit the player</param>
    private void OnCollisionEnter(Collision collision) {
        Debug.Log("collision with "+ collision.gameObject.name);
        if (collision.gameObject.tag == "Enemy" || collision.gameObject.tag == "Obstacle" || collision.gameObject.tag == "Fireball") {
            UpdateFeedbackTextAfterCollision(collision);
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
    /// Updates feedback text in Menu Panel (after taking a hit)
    /// </summary>
    void UpdateFeedbackTextAfterCollision(Collision collision) {
        if (collision.gameObject.tag == "Fireball") {
            feedbackText.GetComponent<TextMeshProUGUI>().text = "Tip : You can deflect projectiles with your katana and shurikens.";
        }
        if (collision.gameObject.tag == "Obstacle") {
            feedbackText.GetComponent<TextMeshProUGUI>().text = "Tip : Obstacles can be destroyed with your katana.";
        }
        else if (collision.gameObject.tag == "Enemy") {
            if (Random.Range(0, 2) == 0) {
                feedbackText.GetComponent<TextMeshProUGUI>().text = "Tip : Avoid bumping into enemies by dashing left and right.";
            }
            else {
                feedbackText.GetComponent<TextMeshProUGUI>().text = "Tip : Avoid bumping into enemies by slicing them or throwing shuriken at them.";
            }
        }
    }

    /// <summary>
    /// Updates left hand position and rotation
    /// </summary>
    /// <param name="posKatana">the right hand position</param>
    /// <param name="rotationKatana">the right hand rotation</param>
    public void UpdateKatanaTraces(Vector3 posKatana, Quaternion rotationKatana) {
        initialPosKatana = posKatana;
        initialRotationKatana = rotationKatana;
    }

    /// <summary>
    /// Checks if player moves right hand enough according to a threshold
    /// </summary>
    /// <param name="posKatana">the right hand position</param>
    /// <param name="rotationKatana">the right hand rotation</param>
    /// <returns>boolean characterizing if the player moving enough</returns>
    public bool IsPlayerMovingKatanaEnough(Vector3 posKatana, Quaternion rotationKatana) {
        posDiff = Vector3.Distance(initialPosKatana, posKatana);
        rotDiff = 1 - Mathf.Abs(Quaternion.Dot(initialRotationKatana, rotationKatana));

        if (posDiff + rotDiff < movementThreshold) {
            return false;
        }

        //update values
        initialPosKatana = posKatana;
        initialRotationKatana = rotationKatana;

        return true;

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