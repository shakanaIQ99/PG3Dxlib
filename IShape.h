#pragma once
#include <stdio.h>
#include <stdlib.h>
class IShape
{
public:

	virtual void size() = 0;
	virtual void draw() = 0;
};

