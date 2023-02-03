#include <stdio.h>
#include <stdlib.h>
#include"IShape.h"
#include"Circle.h"
#include"Rectangle.h"

int main(void)
{
	IShape* shape[2];

	shape[0] = new Circle();
	shape[1] = new Rectangle();

	for (int i = 0; i < 2; i++)
	{
		shape[i]->size();
		shape[i]->draw();
	}

	for (int i = 0; i < 2; i++)
	{
		delete shape[i];
	}
	
	return 0;
}