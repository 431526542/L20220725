#include "Player.h"
#include<iostream>

using namespace std;

//constructor
Player::Player()
{
	HP = 100;
	X = 10;
	Y = 10;
	Gold = 0;

	cout << "�÷��̾� ������" << endl;
}

//Destructor
Player::~Player()
{
	cout << "�÷��̾� ������" << endl;
}

void Player::Move()
{
	cout << "�÷��̾� �̵�" << endl;
}

int Player::GetGold()
{
	return Gold;
}

void Player::SetGold(int NewGold)
{
	if (NewGold < 0)
		return;
	Gold = NewGold;
}

void Player::Attack()
{
	cout << "�÷��̾� ����" << endl;
}
