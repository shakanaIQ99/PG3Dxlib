#pragma once
#include"DxLib.h"
class SceneManager final
{
public:

	SceneManager(const SceneManager& scene) = delete;

	SceneManager& operator = (const SceneManager&scene) = delete;

	static SceneManager* GetInstance();

	void ChangeScene(int sceneNo);

private:
	SceneManager();

	~SceneManager();




};

