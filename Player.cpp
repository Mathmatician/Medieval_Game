#include "Player.h"
#include <iostream>
#include <string>

Player::Player()
{
	std::cout << "Player constructor created" << std::endl;
}

void Player::setName(std::string nm)
{
	name = nm;
}

std::string Player::getName()
{
	return name;
}
