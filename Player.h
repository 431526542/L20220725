#pragma once
#include"Character.h"

class Player : public Character
{
public:
	Player(); //������ Ŭ������ ������ ������ �������Ѵ�.�ʱ�ȭ��ų�� ����Ѵ�.
	~Player(); // �̰͵�
public:
	int GetGold();
	void SetGold(int NewGold);
private:
	void RealMove();
};

