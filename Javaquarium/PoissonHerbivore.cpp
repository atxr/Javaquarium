#include "pch.h"
#include "PoissonHerbivore.h"


PoissonHerbivore::PoissonHerbivore(std::string nom, int sexe, int id) : Poisson(nom,sexe,id)
{
}


PoissonHerbivore::~PoissonHerbivore()
{
}

void PoissonHerbivore::Manger(Nourriture * nourriture)
{
	EstNourri = true;
	// TODO on mange
	nourriture->SetHP(-2);
	SetHP(3);
}

bool PoissonHerbivore::GetTypeNourriture() { return false; }
