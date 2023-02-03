#pragma once
class Vector2
{
public:
	float x;
	float y;

public:
	//�R���X�g���N�^
	Vector2();					//��x�N�g������
	Vector2(float x, float y);	//x,y�������w�肵�Đ���

	//�֐�
	float length()const;				//�m���������߂�
	Vector2& normalize();				//���K��
	float dot(const Vector2& v)const;	//����
	float cross(const Vector2& v)const;	//�O��

	Vector2 operator+()const;
	Vector2 operator-()const;

	Vector2& operator+=(const Vector2& v);
	Vector2& operator-=(const Vector2& v);
	Vector2& operator*=(float s);
	Vector2& operator/=(float s);

};

const Vector2 operator+(const Vector2& v1, const Vector2& v2);
const Vector2 operator-(const Vector2& v1, const Vector2& v2);
const Vector2 operator*(const Vector2& v, float s);
const Vector2 operator*(float s, const Vector2& v);
const Vector2 operator/(const Vector2& v, float s);
