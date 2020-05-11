#include <string>

class Character {
protected:
	std::string characterName;
	int Hp = 0;
	int attackPower = 0;
public:
	Character* head;
	Character* next;
	Character* end;
	void setCharacterName(std::string);
	std::string getCharacterName();
	virtual void Attack() = 0;
};

