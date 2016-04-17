#include "simulation.h"
#include <random>

Simulation::Simulation()
{
}


Simulation::~Simulation()
{
}

void Simulation::Init()
{
	for (unsigned int i = 0; i < NumberOfSpecimens; ++i)
	{
		for (unsigned int j = 0; j < 8; j++)
		{
			for (unsigned int k = 0; k < 3; ++k)
			{
				int a = (float)rand() / RAND_MAX;
				if (a == 1)
				{
					Specimens[i].all[j] << k;
				}
			}
		}
	}
}
