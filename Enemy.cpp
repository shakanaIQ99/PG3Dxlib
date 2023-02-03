#include "Enemy.h"
#include "DxLib.h"

void Enemy::Initialize(int x, int y, Player* pl)
{
	trans.pos.x = x;
	trans.pos.y = y;

	trans.r = 16;

	player = pl;
}

void Enemy::Update()
{
	(this->*MoveTable[static_cast<size_t>(phese)])();

	timer--;
	if (timer < 200)
	{
		phese = Shot;
	}
	if (timer < 100)
	{
		phese = Secession;
	}
}

void Enemy::Update1()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "‹ßÚ");

}

void Enemy::Update2()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "ŽËŒ‚");
}

void Enemy::Update3()
{
	DrawFormatString(0, 0, GetColor(255, 255, 255), "—£’E");
}

void (Enemy::* Enemy::MoveTable[])() =
{
	&Enemy::Update1,
	&Enemy::Update2,
	&Enemy::Update3
};

void Enemy::Draw()
{
	DrawFormatString(0, 20, GetColor(255, 255, 255), "Timer::%d",timer);
}
