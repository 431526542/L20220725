#pragma once

class Player
{
public:
	Player(); //������ Ŭ������ ������ ������ �������Ѵ�.�ʱ�ȭ��ų�� ����Ѵ�.
	~Player(); // �̰͵�

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

