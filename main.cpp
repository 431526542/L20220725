#include<iostream>
#include<conio.h>
#include"Player.h"
#include"Goblin.h"
#include"Slime.h"
#include"wild_boar.h"
#include"Character.h"
#include<vector>

using namespace std;

int main()
{
	/*
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
	delete Yourwild_boar;*/
	/*
	Character* MyCharacter = new Character();

	delete MyCharacter;

	Player* MyPlayer = new Player();

	delete MyPlayer;

	Slime* MySlime = new Slime();

	delete MySlime;*/
	/*
	bool blsRunning = true;

	Player* MyPlayer = new Player;
	Slime* Yourslime = new Slime;
	Goblin* YourGoblin = new Goblin;
	wild_boar* Yourwild_boar = new wild_boar;

	while (blsRunning)
	{
		//input
		int KeyCode = _getch();

		//process
		if (KeyCode == 'Q' || KeyCode == 'q')
		{
			blsRunning = false;
		}

		MyPlayer->Move();
		Yourslime->Move();
		YourGoblin->Move();
		Yourwild_boar->Move();

		//render
	}

	delete MyPlayer;
	delete Yourslime;
	delete YourGoblin;
	delete Yourwild_boar;
	*/

	srand(time(nullptr));//초기값을 주는 것

	//vector<Slime*> YourSlime;
	//vector<Goblin*> YourGoblin;
	//vector<wild_boar*> Yourwild_boar;
	//vector<Player*> MyPlayer;
	vector<Character*> MyCharacter; // 이것이 위에것에 다 포함된다

	//1~5까지의 몬스터
	//int SlimeCount = (rand() % 2) + 1;
	//int GoblinCount = (rand() % 3) + 1;
	//int wild_boarCount = (rand() % 4) + 1;

	MyCharacter.push_back(new Player());

	for (int i = 0; i < 10; ++i)
	{
		int Type = (rand() % 3) + 1;

		if (Type == 1)
		{
			MyCharacter.push_back(new Slime());
		}
		else if (Type == 2)
		{
			MyCharacter.push_back(new Goblin());
		}
		else if (Type == 3)
		{
			MyCharacter.push_back(new wild_boar());
		}
	}

	

	//for (int i = 0; i < (rand() % 2) + 1; ++i)
	//{
	//	MyCharacter.push_back(new Slime());
	//}
	//for (int i = 0; i < (rand() % 3) + 1; ++i)
	//{
	//	MyCharacter.push_back(new Goblin());
	//}
	//for (int i = 0; i < (rand() % 4) + 1; ++i)
	//{
	//	MyCharacter.push_back(new wild_boar());
	//}
	//for (int i = 0; i < 1; ++i)
	//{
	//	MyCharacter.push_back(new Player());
	//}
	

	//Slime* YourSlime = new Slime[SlimeCount];
	//Goblin* YourGoblin = new Goblin[GoblinCount];
	//wild_boar* Yourwild_boar = new  wild_boar[wild_boarCount];
	//Player* MyPlayer = new Player();

	bool blsRunning = true;

	while (blsRunning)
	{
		//input
		int KeyCode = _getch();

		//process
		if (KeyCode == 'Q' || KeyCode == 'q')
		{
			blsRunning = false;
		}

		for (int i = 0; i < MyCharacter.size(); ++i)
		{
			MyCharacter[i]->Move();
		}

		//render
	}

	delete MyCharacter[0];

	return 0;
}