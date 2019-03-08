#pragma once
#include "Nourriture.h"
class Algue :
	public Nourriture
{
public:
	Algue();
	~Algue();

	//Getter
	virtual bool GetTypeNourriture();
};

