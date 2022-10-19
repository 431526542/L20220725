#pragma once
#include<string>

class Character
{
public:
	Character();
	virtual~Character();

protected: //인터페이스는 비공개고 상속은 가능하다.
	int HP;
	int Gold;
	int X;
	int Y;

	std::string name;

public:
	virtual void Move(); //자식의 재정의된 함수가 있으면 먼저 실행
	void Attack();
};

