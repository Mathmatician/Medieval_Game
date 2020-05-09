#include "Character.h"

class CharacterList {
private:
	Character* head;
	Character* next;
	Character* end;
	int listSize = 0;
public:
	CharacterList();
	void Append(Character&);
	Character* Select(std::string);
	void TraverseList();
};

