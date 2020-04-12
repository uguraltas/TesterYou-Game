using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {


	public int health = 100;

	public GameObject deathEffect;

	
	public GameObject GameOver;

	public void TakeDamage(int damage)
	{
		health -= damage;
		HealthScript.HealthValue -= damage;
		if (health <= 0)
		{
			Die();
		}
	}

	void Die()
	{
		Instantiate(deathEffect, transform.position, Quaternion.identity);
		GameOver.gameObject.SetActive(true);
		Time.timeScale = 0;
		HealthScript.HealthValue = 0;

	}


}