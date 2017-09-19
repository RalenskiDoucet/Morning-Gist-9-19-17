#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::Zombie(int hp, int att)
{
	hp = mHealth;
	att = mAttackPower;
}

void Zombie::getHealth()
{
	mHealth;
}

void Zombie::getAttack()
{
	mAttackPower;
}

void Zombie::TakeDamage()
{
	 mHealth-mAttackPower;
}
bool Zombie::isDead()
{
	return false (mHealth > 0);
}
