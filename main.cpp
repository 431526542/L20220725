#include<iostream>
#include<conio.h>
#include"Player.h"
#include"Goblin.h"
#include"Slime.h"
#include"wild_boar.h"

using namespace std;

int main()
{
	bool blsRuuning = true;
	Player* MyPlayer = new Player; 
	Goblin* YourGoblin = new Goblin;
	Slime* YourSlime = new Slime;
	wild_boar* Yourwild_boar = new wild_boar;

	MyPlayer->SetGold(-10000);

	while (blsRuuning)
	{
		//input
		int KeyCode = _getch();

		//process
		if (KeyCode == 'Q' || KeyCode == 'q')
		{
			blsRuuning = false;
		}
		MyPlayer->Move();
		YourGoblin->Move();
		YourSlime->Move();
		Yourwild_boar->Move();

		//rander

	}

	delete MyPlayer;
	delete YourGoblin;
	delete YourSlime;
	delete Yourwild_boar;

	return 0;
}