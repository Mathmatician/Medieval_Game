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

	listSize += 1;
}

Character* CharacterList::Select(int n)
{
	if (head != nullptr)
	{
		int count = 1;
		Character* tmp = head;
		while (count < n)
		{
			tmp = tmp->next;
			count++;
		}

		return tmp;
	}

	return nullptr;
}

Character* CharacterList::Select(std::string cnm)
{
	if (head != nullptr)
	{
		Character* tmp = head;
		while (tmp->getCharacterName() != cnm)
			tmp = tmp->next;

		return tmp;
	}

	return nullptr;
}


void CharacterList::TraverseList()
{
	if (head != nullptr)
	{
		Character* tmp = head;
		int count = 1;
		while (tmp != end)
		{
			std::cout << " " + std::to_string(count) + ".) " + tmp->getCharacterName() << std::endl;
			tmp = tmp->next;
			count++;
		}
		std::cout << " " + std::to_string(count) + ".) " + tmp->getCharacterName() << std::endl;
	}
	else
		std::cout << "  * You have no characters" << std::endl;
}
