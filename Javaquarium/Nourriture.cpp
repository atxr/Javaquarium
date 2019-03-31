#include "pch.h"
#include "Nourriture.h"


Nourriture::Nourriture() : HP(10)
{
}


Nourriture::~Nourriture()
{
}

bool Nourriture::GetEstVivant() { return HP>0; }
int Nourriture::GetHP() { return HP; }

void Nourriture::SetHP(int pt)
{
	HP += pt;
}

