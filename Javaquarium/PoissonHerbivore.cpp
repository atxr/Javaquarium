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
	EstNourri = true;
	// TODO on mange
	nourriture->SetEstVivant();
}

bool PoissonHerbivore::GetTypeNourriture() { return false; }
