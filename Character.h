#pragma once
#include<string>

class Character
{
public:
	Character();
	virtual~Character();

protected: //�������̽��� ������� ����� �����ϴ�.
	int HP;
	int Gold;
	int X;
	int Y;

	std::string name;

public:
	virtual void Move(); //�ڽ��� �����ǵ� �Լ��� ������ ���� ����
	void Attack();
};

