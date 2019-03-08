#include "pch.h"
#include "Poisson.h"


Poisson::Poisson()
{
}

Poisson::Poisson(std::string nom, int sexe) : Nom(nom), Sexe(sexe)
{
}


Poisson::~Poisson()
{
}

//Getter

std::string Poisson::GetName() { return Nom; }
int Poisson::GetSexe() { return Sexe; }
bool Poisson::GetTypeNourriture() { return true; /* ie nourriture pour carnivore */ }
