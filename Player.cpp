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

void Player::CreateCharacter(Character& c, std::string cnm)
{
	c.setCharacterName(cnm);
	listOfCharacters.Append(c);
}

void Player::SelectCharacter(std::string cnm)
{
	selectedCharacter = listOfCharacters.Select(cnm);
}

Character* Player::CurrentCharacter()
{
	return selectedCharacter;
}

void Player::RetrieveCharacters()
{
	listOfCharacters.TraverseList();
}