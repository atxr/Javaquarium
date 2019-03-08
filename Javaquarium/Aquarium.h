#pragma once
#include <vector>
#include "Poisson.h"
#include "Algue.h"
#include <iostream>
#include <random>

class Aquarium
{
public:
	Aquarium();
	~Aquarium();
	void PasserTemps();
	void AjouterPoisson(Poisson *poisson);
	void AjouterAlgue(Algue *algue);
private:
	std::vector<Poisson*> TabPoisson; // TODO create a type of special array for 
	std::vector<Algue*> TabAlgue;     // both of these to vector
};

