#include "Goblin.h"
#include<iostream>

using namespace std;


Goblin::Goblin()
{
	HP = 100;
	X = 10;
	Y = 10;
	Gold = 0;

	cout << "��� ������" << endl;
}

Goblin::~Goblin()
{
	cout << "��� ������" << endl;
}

