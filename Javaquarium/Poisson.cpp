#include "pch.h"
#include "Poisson.h"


Poisson::Poisson()
{
}

Poisson::Poisson(std::string nom, int sexe, int id) 
	: Nourriture(), Nom(nom), Sexe(sexe), EstNourri(false), ID(id), Age(0)
{
}


Poisson::~Poisson()
{
}

//Getter

std::string Poisson::GetName() { return Nom; }
int Poisson::GetSexe() { return Sexe; }
bool Poisson::GetEstNourri() { return EstNourri; }
int Poisson::GetID() { return ID; }
void Poisson::SetEstNourri(bool estnourri) { EstNourri = estnourri; };


void Poisson::IncrAge() 
{ 
	Age++; 
	if (Age >= 20) 
	{ 
		SetHP(-HP); 
	} 
}
