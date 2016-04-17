#pragma once
#include "Globals.h"
#include "SimulationSettings.h"

class Simulation
{
public:
	Simulation();
	~Simulation();

	void Init();
private:
	Genome Specimens[NumberOfSpecimens];
};

