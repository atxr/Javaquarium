#include "pch.h"
#include "Nourriture.h"


Nourriture::Nourriture() : EstVivant(true)
{
}


Nourriture::~Nourriture()
{
}

bool Nourriture::GetEstVivant() { return EstVivant; }

void Nourriture::SetEstVivant(bool b)
{
	EstVivant = b;
}
