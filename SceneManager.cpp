#include "SceneManager.h"

SceneManager* SceneManager::GetInstance()
{
    static SceneManager instance;


    return &instance;
}

SceneManager::SceneManager()
{

}


SceneManager::~SceneManager()
{

}

void SceneManager::ChangeScene(int sceneNo)
{
	switch (sceneNo)
	{
	case 0:
		SetBackgroundColor(0x00, 0x00, 0xFF);

		break;

	case 1:
		SetBackgroundColor(0x00, 0xFF, 0x00);


		break;


	case 2:

		SetBackgroundColor(0xFF, 0x00, 0x00);
		break;
	}


}
