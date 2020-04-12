using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBullet : MonoBehaviour {

	float moveSpeed = 7f;
	public GameObject impactEffect;


	Rigidbody2D rb;

	PlayerMovement target;
	Vector2 moveDirection;

	public int damage = 40;


	void Start () {

		rb = GetComponent<Rigidbody2D> ();
		target = GameObject.FindObjectOfType<PlayerMovement>();
		moveDirection = (target.transform.position - transform.position).normalized * moveSpeed;
		rb.velocity = new Vector2 (moveDirection.x, moveDirection.y);
		Destroy (gameObject, 3f);
	}

	void OnTriggerEnter2D (Collider2D col)
	{ 
		Player player = col.GetComponent<Player>();
		if (player != null)
		{

			player.TakeDamage(damage);
		}
	

        if (col.gameObject.name.Equals ("Player")) {

			Instantiate(impactEffect, transform.position, transform.rotation);

			Destroy(gameObject);
		}
	}

}
