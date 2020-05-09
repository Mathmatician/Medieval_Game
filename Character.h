#include <string>

class Character {
private:
	std::string characterName;
public:
	Character* head;
	Character* next;
	Character* end;
	void setCharacterName(std::string);
	std::string getCharacterName();
	virtual void Attack() = 0;
};

