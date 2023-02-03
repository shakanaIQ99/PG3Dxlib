#include "Player.h"
#include "DxLib.h"

void Player::Initialize()
{
	trans.pos.x = 300;
	trans.pos.y = 200;

	trans.r = 16;
}

void Player::Update()
{
	if (GetKey(KEY_INPUT_LEFT))
	{
		trans.pos.x -= spd;
	}
	if (GetKey(KEY_INPUT_RIGHT))
	{
		trans.pos.x += spd;

	}
	if (GetKey(KEY_INPUT_UP))
	{
		trans.pos.y -= spd;
	}
	if (GetKey(KEY_INPUT_DOWN))
	{
		trans.pos.y += spd;
	}


}

void Player::Draw()
{
	DrawCircle(trans.pos.x, trans.pos.y, trans.r, GetColor(0, 0, 255));
}
