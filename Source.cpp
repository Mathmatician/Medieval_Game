#include <iostream>
#include "Player.h"

using namespace std;

// Player display variables
string playerName = "";

void PlayerDisplay(Player&);


int main()
{
	/*-------------------------------------------------------
	| Prompt Player to create player account and enter name |
	-------------------------------------------------------*/
	string us_in = "";
	while (us_in == "")
	{
		system("cls");
		cout << "Enter player name: ";
		getline(cin, us_in);
	}

	Player p;
	p.setName(us_in);


	/*----------------------------------
	| Prompt User to create Characters |
	----------------------------------*/
	us_in = "";
	while (us_in == "")
	{
		string clssSelect = "";
		while (true)
		{
			system("cls");
			PlayerDisplay(p);
			cout << "Pick a character class:" << endl;
			cout << "\t w = Warrior" << endl << "\t m = Monk" << endl;
			cout << ": ";
			getline(cin, us_in);
			if (us_in == "w")
			{
				clssSelect = "You've chosen WARRIOR";
				break;
			}
			else if (us_in == "m")
			{
				clssSelect = "You've chosen MONK";
				break;
			}
			
			system("cls");
		}

		string nm = "";
		while (nm == "")
		{
			system("cls");
			PlayerDisplay(p);
			cout << clssSelect << endl << endl;
			cout << "Name your character (enter b for back): ";
			getline(cin, nm);
		}

		if (nm != "b")
		{
			if (us_in == "w")
				p.CreateCharacter(*(new Warrior()), nm);
			else if (us_in == "m")
				p.CreateCharacter(*(new Monk()), nm);


			while (true)
			{
				system("cls");
				PlayerDisplay(p);
				cout << "Create another chracter?: ";
				getline(cin, us_in);
				if (us_in == "y")
				{
					us_in = "";
					break;
				}
				else if (us_in == "n")
				{
					break;
				}
			}
		}
		if (us_in == "b" || nm == "b")
			us_in = "";
	}


	/*------------------------------------------
	| Player selects WARRIOR class and attacks |
	------------------------------------------*/
	//cout << endl;
	//p.SelectCharacter("Tim");
	//p.CurrentCharacter()->Attack();


	/*---------------------------------------
	| Player selects MONK class and attacks |
	---------------------------------------*/
	cout << endl;
	//p.SelectCharacter("Ang");
	//p.CurrentCharacter()->Attack();


	system("pause"); // stops program
	return 0;
}


void PlayerDisplay(Player& p)
{
	cout << "Welcome " << p.getName() << endl << endl;
	cout << "Character List" << endl;
	cout << "--------------" << endl;
	p.RetrieveCharacters();
	cout << "____________________________" << endl;
	cout << endl;
}

