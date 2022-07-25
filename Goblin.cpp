#include "Goblin.h"
#include<iostream>

using namespace std;


Goblin::Goblin()
{
	HP = 100;
	X = 10;
	Y = 10;
	Gold = 0;

	cout << "고블린 생성자" << endl;
}

Goblin::~Goblin()
{
	cout << "고블린 생성자" << endl;
}

