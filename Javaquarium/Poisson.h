#pragma once
#include "Nourriture.h"
#include <string>

class Poisson :
	public Nourriture
{
public:
	Poisson();
	Poisson(std::string nom, int sexe, int id);
	~Poisson();
	virtual void Manger(Nourriture* nourriture) = 0;

	//Getter
	std::string GetName();
	int GetSexe();
	virtual bool GetTypeNourriture() = 0;
	bool GetEstNourri();
	int GetID();
	void IncrAge(); //TODO algues ont un age aussi

	//Set
	void SetEstNourri(bool estnourri);

protected:
	std::string Nom;
	int Sexe;
	bool EstNourri;
	int ID;
	int Age;
};

