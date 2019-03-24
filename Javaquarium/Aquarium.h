#pragma once
#include <vector>
#include "Poisson.h"
#include "Algue.h"
#include <iostream>
#include <random>

#define OUT
using TPoisson = std::vector<Poisson*>;
using TAlgue = std::vector<Algue*>;

class Aquarium
{
public:
	Aquarium();
	~Aquarium();
	void PasserTemps();
	void AjouterPoisson(Poisson *poisson);
	void AjouterAlgue(Algue *algue);
private:
	void PoissonPasNourri(OUT TPoisson *T_);
	void Update();

	TPoisson T_Poisson; // TODO create a type of special array for 
	TAlgue T_Algue;     // both of these to vector
};

