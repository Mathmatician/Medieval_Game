#include "Player.h"
#include <iostream>

Warrior::Warrior()
{
	Hp = 500;
	attackPower = 10;
}

void Warrior::Attack()
{
	std::cout << "Warrior Attacks" << std::endl;
}
