using UnityEngine;

public class SwordController : MonoBehaviour {
    private float damage = 1f;

    private void OnCollisionEnter(Collision collision) {
        if (collision.gameObject.tag == "Enemy" || collision.gameObject.tag == "Obstacle") {
            collision.gameObject.GetComponent<EnemyController>().TakeDamage(damage);
        }
    }
}
