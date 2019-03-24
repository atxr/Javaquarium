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
	EstNourri = true;
	// TODO on mange
	nourriture->SetEstVivant(false);
}

bool PoissonCarnivore::GetTypeNourriture() { return true; }
