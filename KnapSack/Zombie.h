#pragma once
#include <Bengine/ResourceManager.h>
#include "Agent.h"
#include "Level.h"
#include <algorithm>

class Zombie : public Agent
{
public:
	Zombie();
	~Zombie();

	void init(float speed, glm::vec2 pos);

	virtual void update(const std::vector<std::string>& levelData,
		std::vector<Human*>& humans,
		std::vector<Zombie*>& zombies);
private:
	
	Human* getNearestHuman(std::vector<Human*>& humans);
};

