#pragma once
#include "Module.h"
#include "Globals.h"
#include <vector>


class Primitive;
class PhysBody3D;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	bool Update(float dt) override;
	bool PostUpdate();
	bool CleanUp();

	//TODO 9: Create an "OnCollision" method specific for this module

private:
	std::vector<Primitive*> primitives;
};
