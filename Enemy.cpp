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
	Vector2 EtoP = player->Gettrans().pos - trans.pos;

	float EtoPlength = EtoP.length();

	EtoP.normalize();

	EtoP *= trans.r;

	if (EtoPlength < EtoP.length() + EtoP.length())
	{
		death = true;
	}

}

void Enemy::Draw()
{
	if (!death)
	{
		DrawCircle(trans.pos.x, trans.pos.y, trans.r, GetColor(255, 0, 0));
	}
}
