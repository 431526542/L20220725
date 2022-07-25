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

	name = "Player";

	cout << "Player Constructor" << endl;
}

//Destructor
Player::~Player()
{
	cout << "Player Destructor" << endl;
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

void Player::Move()
{
	Character::Move();// 이렇게 하면 캐릭터에 무브함수가 먼저 실행한다.
	cout << "Player is Run" << endl;
}

void Player::RealMove()
{
}
