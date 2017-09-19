#include "Zombie.h"
#include<iostream>

int main()
{
	Zombie zombie1;
	zombie1.getHealth();
	int hp1 = (100);
	int att1= (30);
	zombie1.getAttack();
	Zombie zombie2;
	zombie2.getHealth();
	int hp2 = (200);
	zombie2.getAttack();
	int att2 = (10);

	zombie1.mHealth- zombie2.getAttack;
	zombie2.mHealth - zombie1.getAttack;
	
	{ while
		(zombie1.getHealth > 0, zombie2.getHealth > 0);
	}
}