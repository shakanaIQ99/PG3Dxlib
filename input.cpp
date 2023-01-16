#include "DxLib.h"
#include "input.h"

// 最新のキーボード情報用
char keys[256] = { 0 };
// 1ループ(フレーム)前のキーボード情報
char prev[256] = { 0 };

void InputUpdate()
{
	// 最新のキーボード情報だったものは1フレーム前のキーボード情報として保存
	for (int i = 0; i < 256; i++)
	{
		prev[i] = keys[i];
	}
	// 最新のキーボード情報を取得
	GetHitKeyStateAll(keys);
}
bool GetKey(int key)
{
	//if (key >= 256)	return false;
	return keys[key];
}
bool GetPressKey(int key)
{
	return keys[key] && !prev[key];
}
bool GetReleaseKey(int key)
{
	return !keys[key] && prev[key];
}