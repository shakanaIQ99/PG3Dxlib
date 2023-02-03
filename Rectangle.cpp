#include "Rectangle.h"

void Rectangle::size()
{
	area = x * y;
}

void Rectangle::draw()
{
	printf("Area::%d", area);
}
