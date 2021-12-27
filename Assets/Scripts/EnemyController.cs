using UnityEngine;

public class EnemyController : MonoBehaviour {
    public float health = 1f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
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

}
