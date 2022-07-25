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

	cout << "플레이어 생성자" << endl;
}

//Destructor
Player::~Player()
{
	cout << "플레이어 제거자" << endl;
}

void Player::Move()
{
	cout << "플레이어 이동" << endl;
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
	cout << "플레이어 공격" << endl;
}
