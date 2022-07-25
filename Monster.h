#pragma once
class Monster
{
public:
	Monster();
	~Monster();

	int HP;
	int Gold;
	int X;
	int Y;

	void Move();
	void Attack();
};

