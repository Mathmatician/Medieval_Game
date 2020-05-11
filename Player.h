#include <string>
#include <iostream>
#include "CharacterList.h"

class Player {
private:
	std::string name;
	CharacterList listOfCharacters;
	Character* selectedCharacter;

public:
	Player();
	void setName(std::string);
	void CreateCharacter(Character&, std::string);
	void SelectCharacter(int);
	void SelectCharacter(std::string);
	void RetrieveCharacters();
	Character* CurrentCharacter();
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

