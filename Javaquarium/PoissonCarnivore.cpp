#include "pch.h"
#include "PoissonCarnivore.h"


PoissonCarnivore::PoissonCarnivore()
{
}

PoissonCarnivore::PoissonCarnivore(std::string nom, int sexe, int id) : Poisson(nom, sexe, id)
{
}


PoissonCarnivore::~PoissonCarnivore()
{
}

void PoissonCarnivore::Manger(Nourriture * nourriture)
{
	EstNourri = true;
	// TODO on mange
	nourriture->SetHP(-4);
	SetHP(5);
}

bool PoissonCarnivore::GetTypeNourriture() { return true; }

void PoissonCarnivore::GetT_Proie(OUT TPoisson * T_Proie, TPoisson * T_Poisson)
{
	T_Proie->clear();
	for (auto &poisson : *T_Poisson)
	{
		if (poisson->GetID() != ID) 
		{ 
			T_Proie->push_back(poisson); 
		}
	}
}
