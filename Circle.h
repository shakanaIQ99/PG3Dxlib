#pragma once
#include"IShape.h"
class Circle:public IShape
{
public:

	void size() override;
	void draw() override;

private:

	int r = 3;

	const float pai = 3.14;

	float area;
};

