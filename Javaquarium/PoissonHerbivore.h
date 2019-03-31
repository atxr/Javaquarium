#pragma once
#include "Poisson.h"
class PoissonHerbivore :
	public Poisson
{
public:
	PoissonHerbivore(std::string nom, int sexe, int id);
	~PoissonHerbivore();
	virtual void Manger(Nourriture *nourriture);
	virtual bool GetTypeNourriture();
};

