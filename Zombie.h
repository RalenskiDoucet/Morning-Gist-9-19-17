#pragma once

class Zombie
{
public:
	int mHealth;
	int mAttackPower;
	Zombie();
	Zombie(int hp, int att);
	void getHealth();
	void getAttack();
	void TakeDamage();
	bool isDead();





};

