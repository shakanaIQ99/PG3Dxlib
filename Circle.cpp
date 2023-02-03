#include "Circle.h"



void Circle::size()
{
	area = r * r * pai;
}

void Circle::draw()
{
	printf("Area::%4.4f", area);
}
