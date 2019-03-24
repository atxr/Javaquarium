#include "pch.h"
#include "Poisson.h"


Poisson::Poisson()
{
}

Poisson::Poisson(std::string nom, int sexe) : Nom(nom), Sexe(sexe), EstNourri(false)
{
}


Poisson::~Poisson()
{
}

//Getter

std::string Poisson::GetName() { return Nom; }
int Poisson::GetSexe() { return Sexe; }
bool Poisson::GetEstNourri() { return EstNourri; }
void Poisson::SetEstNourri(bool estnourri) { EstNourri = estnourri; };
