#pragma once
#include"Character.h"

class Player : public Character
{
public: //�������̽� ���� �׸��� ��Ӱ���
	Player(); //������ Ŭ������ ������ ������ �������Ѵ�.�ʱ�ȭ��ų�� ����Ѵ�.
	virtual~Player(); // �Ҹ��ڿ��� ������� ������Ѵ�,.

public:
	int GetGold();
	void SetGold(int NewGold);

	virtual void Move() override; // ���� �θ�κ��� ��ӹ����͵� ������ �߰�.....

private: //�������̽� ����� �׸��� ��� �Ұ���
	void RealMove();
};

