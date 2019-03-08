#include "pch.h"
#include "PoissonHerbivore.h"


PoissonHerbivore::PoissonHerbivore(std::string nom, int sexe) : Poisson(nom,sexe)
{
}


PoissonHerbivore::~PoissonHerbivore()
{
}

void PoissonHerbivore::Manger(Nourriture * nourriture)
{
	if (nourriture->GetTypeNourriture() == false)
	{
		// TODO on mange
	}
}
