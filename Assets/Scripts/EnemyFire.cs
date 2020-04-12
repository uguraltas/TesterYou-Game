using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFire : MonoBehaviour
{

	[SerializeField]
	GameObject bullet;

	float fireRate;
	float nextFire;
	public Transform firePoint;


	void Start()
	{
		fireRate = 3f;
		nextFire = Time.time;
	}

	void Update()
	{
		CheckIfTimeToFire();
	}

	void CheckIfTimeToFire()
	{
		if (Time.time > nextFire)
		{
			Instantiate(bullet, firePoint.position, Quaternion.identity);
			nextFire = Time.time + fireRate;
		}

	}

}
