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
	p.CreateCharacter(w, "Tim");
	p.CreateCharacter(m, "Ang");


	/*------------------------------------------
	| Player selects WARRIOR class and attacks |
	------------------------------------------*/
	p.SelectCharacter("Tim");
	p.CurrentCharacter()->Attack();


	/*---------------------------------------
	| Player selects MONK class and attacks |
	---------------------------------------*/
	p.SelectCharacter("Ang");
	p.CurrentCharacter()->Attack();


	/*-----------------------------------------
	| Traverse and display List of Characters |
	-----------------------------------------*/
	cout << endl;
	p.RetrieveCharacters();



	cin.get(); // stops program
}

