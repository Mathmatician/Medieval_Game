#include "Player.h"
#include <iostream>
#include <string>

Player::Player() {}

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

void Player::SelectCharacter(int n)
{
	selectedCharacter = listOfCharacters.Select(n);
}

void Player::SelectCharacter(std::string cnm)
{

}

Character* Player::CurrentCharacter()
{
	return selectedCharacter;
}

void Player::RetrieveCharacters()
{
	listOfCharacters.TraverseList();
}
