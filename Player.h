#pragma once

class Player
{
public:
	Player(); //생성자 클래스가 있으면 무조건 만들어야한다.초기화시킬때 사용한다.
	~Player(); // 이것도

private:
	//member variable
	int HP;
	int Gold;
	int X;
	int Y;


	//method
public:
	void Move();
	int GetGold();
	void SetGold(int NewGold);
private:
	void RealMove();
	void Attack();
};

