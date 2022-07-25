#pragma once
#include"Character.h"

class Player : public Character
{
public: //인터페이스 공개 그리고 상속가능
	Player(); //생성자 클래스가 있으면 무조건 만들어야한다.초기화시킬때 사용한다.
	virtual~Player(); // 소멸자에는 버츄얼을 써줘야한다,.

public:
	int GetGold();
	void SetGold(int NewGold);

	virtual void Move() override; // 나는 부모로부터 상속받은것데 재정의 했고.....

private: //인터페이스 비공개 그리고 상속 불가능
	void RealMove();
};

