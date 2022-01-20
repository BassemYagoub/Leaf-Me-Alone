using UnityEngine;

public class ProjectileController : MonoBehaviour {
    public string throwerTag = "Player"; //Player or Enemy
    public float projectileDuration = 0.2f;
    private float projectileDestructionTime;
    private float damage = 1f;


    private void Awake() {
        projectileDestructionTime = Time.time+projectileDuration;
    }

    private void Update() {
        //Destroy projectile after projectileDuration seconds
        if(Time.time > projectileDestructionTime) {
            Destroy(gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision) {
        if(throwerTag == "Player") {
            if (collision.gameObject.tag != "Shuriken" && collision.gameObject.tag != "Player" && collision.gameObject.tag == "Enemy") {
                collision.gameObject.GetComponent<EnemyController>().TakeDamage(damage);
            }
            Destroy(gameObject);
            
        }else if(throwerTag == "Enemy") {
            if (collision.gameObject.tag == "Player") {
                collision.gameObject.GetComponent<PlayerController>().TakeDamage(damage);
            }
            Destroy(gameObject);

        }
    }


}
