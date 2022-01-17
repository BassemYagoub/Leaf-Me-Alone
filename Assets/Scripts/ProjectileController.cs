using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileController : MonoBehaviour {
    public float projectileDuration = 0.2f;
    private float projectileDestructionTime;
    private bool collided;
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
        if(collision.gameObject.tag != "Shuriken" && collision.gameObject.tag != "Player" && !collided) {

            //Destroy projectile after hitting something
            collided = true;
            if(collision.gameObject.tag == "Enemy") {
                collision.gameObject.GetComponent<EnemyController>().TakeDamage(damage);
            }
            Destroy(gameObject);
        }
    }


}
