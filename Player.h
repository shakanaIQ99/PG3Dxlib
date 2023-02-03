#pragma once
#include"Transform.h"
#include"input.h"
class Player
{

public:

	
	

	void Initialize();

	void Update();

	void Draw();

	Transform Gettrans() { return trans; }

private:

	Transform trans;

	int spd = 2;


};

