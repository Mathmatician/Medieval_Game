#include "Character.h"
#include <iostream>

void Character::setCharacterName(std::string cnm)
{
	characterName = cnm;
}

std::string Character::getCharacterName()
{
	return characterName;
}