#include "pch.h"
#include "PoissonCarnivore.h"


PoissonCarnivore::PoissonCarnivore()
{
}

PoissonCarnivore::PoissonCarnivore(std::string nom, int sexe) : Poisson(nom, sexe)
{
}


PoissonCarnivore::~PoissonCarnivore()
{
}

void PoissonCarnivore::Manger(Nourriture * nourriture)
{
	if (nourriture->GetTypeNourriture() == true)
	{
		// TODO on mange
	}
}
