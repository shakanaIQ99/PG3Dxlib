#include "DxLib.h"
#include "input.h"

// �ŐV�̃L�[�{�[�h���p
char keys[256] = { 0 };
// 1���[�v(�t���[��)�O�̃L�[�{�[�h���
char prev[256] = { 0 };

void InputUpdate()
{
	// �ŐV�̃L�[�{�[�h��񂾂������̂�1�t���[���O�̃L�[�{�[�h���Ƃ��ĕۑ�
	for (int i = 0; i < 256; i++)
	{
		prev[i] = keys[i];
	}
	// �ŐV�̃L�[�{�[�h�����擾
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