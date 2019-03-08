#pragma once
#include "Poisson.h"
class PoissonCarnivore :
	public Poisson
{
public:
	PoissonCarnivore();
	PoissonCarnivore(std::string nom, int sexe);
	~PoissonCarnivore();
	virtual void Manger(Nourriture *nourriture);
};

