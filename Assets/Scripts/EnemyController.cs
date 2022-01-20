using UnityEngine;

public class EnemyController : MonoBehaviour {
    public float health = 1f;
    public GameObject projectilePrefab;
    public float projectileSpeed;
    public float fireRate = 1f;
    private float nextTimeToFire = 0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update() {
        AutomaticAttack();
    }
    public void TakeDamage(float amount) {
        health -= amount;
        if (health <= 0f) {
            Die();
        }
    }

    void Die() {
        Destroy(gameObject);
    }


    void AutomaticAttack() {
        //shoot projectile if not reloading
        if (Time.time >= nextTimeToFire && transform.tag == "Enemy") { //Obstacles cannot throw projectile
            nextTimeToFire = Time.time + 1f / fireRate;
            Vector3 firingPosition = new Vector3(transform.position.x, transform.position.y+0.3f, transform.position.z-0.4f);
            GameObject projectileObj = Instantiate(projectilePrefab, firingPosition, Quaternion.identity) as GameObject;
            projectileObj.GetComponent<Rigidbody>().velocity = (transform.rotation * Vector3.forward).normalized * projectileSpeed;
        }
    }
}
