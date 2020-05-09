#include "CharacterList.h"
#include <iostream>

CharacterList::CharacterList()
{
	head = nullptr;
	next = nullptr;
	end = nullptr;
}

void CharacterList::Append(Character& c)
{
	if (head == nullptr)
	{
		head = &c;
		end = head;
	}
	else
	{
		end->next = &c;
		end = &c;
	}

	//listSize += 1;
}

Character* CharacterList::Select(std::string cnm)
{
	if (head != nullptr)
	{
		Character* tmp = head;
		while (tmp->getCharacterName() != cnm)
		{
			tmp = tmp->next;
		}

		return tmp;
	}

	return head;
}


void CharacterList::TraverseList()
{
	Character* tmp = head;
	while (tmp != end)
	{
		std::cout << tmp->getCharacterName() << std::endl;
		tmp = tmp->next;
	}
	std::cout << tmp->getCharacterName() << std::endl;
}
