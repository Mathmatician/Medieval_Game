#include <string>
#include <iostream>
#include "Character.h"

class Player {
private:
	std::string name;

public:
	Character* playerCharacter;

	Player();
	void setName(std::string);
	std::string getName();
};


class Warrior : public Character {
public:
	Warrior();
	void Attack();
};

class Monk : public Character {
public:
	Monk();
	void Attack();
};

