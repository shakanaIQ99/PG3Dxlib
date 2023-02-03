#pragma once
#include"Transform.h"
#include"input.h"
#include"Player.h"
class Enemy
{
public:

	static bool death;

	void Initialize(int x, int y,Player* pl);

	void Update();

	void Draw();



private:

	Transform trans;

	Player* player;


};

