#pragma once
#include"Transform.h"
#include"input.h"
#include"Player.h"
class Enemy
{
public:

	enum Phese
	{
		Melee,
		Shot,
		Secession
	};

	void Initialize(int x, int y,Player* pl);

	void Update();

	void Update1();

	void Update2();

	void Update3();

	void Draw();



private:

	static void(Enemy::* MoveTable[])();

	Transform trans;

	Player* player;

	Phese phese=Melee;

	int timer = 300;

};

