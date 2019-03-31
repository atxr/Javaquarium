#pragma once
#include "Poisson.h"
#include <vector>

#define OUT
using TPoisson = std::vector<Poisson*>;

class PoissonCarnivore :
	public Poisson
{
public:
	PoissonCarnivore();
	PoissonCarnivore(std::string nom, int sexe, int id);
	~PoissonCarnivore();
	virtual void Manger(Nourriture *nourriture);
	virtual bool GetTypeNourriture();
	void GetT_Proie(OUT TPoisson *T_Proie, TPoisson *T_Poisson);
protected:
};

