#include "Player.h"
#include <iostream>

Monk::Monk()
{
	Hp = 200;
	attackPower = 40;
}

void Monk::Attack()
{
	std::cout << "Monk Attacks" << std::endl;
}
