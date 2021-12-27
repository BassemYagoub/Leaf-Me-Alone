using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour {


    public float damage = 10f;
    public float range = 100f;
    public float fireRate = 15f;
    public float impactForce = 30f;

    public Camera fpscamera;
    public GameObject impactEffect;

    private float nextTimeToFire = 0f;
    private Gamepad gamepad;


    void Start() {
        gamepad = Gamepad.current;
    }

    // Update is called once per frame
    void Update() {

        if (gamepad == null)
            return; // No gamepad connected.

        if (gamepad.yButton.isPressed && Time.time >= nextTimeToFire) {
            Debug.Log("button pressed");
            nextTimeToFire = Time.time + 1f / fireRate;
            Shoot();
        }

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