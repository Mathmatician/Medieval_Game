#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
	/*-------------------------------------
	| Create player account and sets name |
	----------------_--------------------*/
	Player p;
	p.setName("Albert");


	/*-------------------------------
	| Creates two character classes |
	-------------------------------*/
	Warrior w;
	Monk m;

	/*------------------------------------------
	| Player selects WARRIOR class and attacks |
	------------------------------------------*/
	p.playerCharacter = &w;
	p.playerCharacter->Attack();


	/*---------------------------------------
	| Player selects MONK class and attacks |
	---------------------------------------*/
	p.playerCharacter = &m;
	p.playerCharacter->Attack();



	cin.get(); // stops program
}

