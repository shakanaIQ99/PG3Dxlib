#pragma once
#include"IShape.h"
class Rectangle:public IShape
{
public:
	void size() override;
	void draw() override;

private:

	int x = 4;

	int y = 3;

	int area;
};

