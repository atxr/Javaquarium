#pragma once
#include "PoissonCarnivore.h"
#include "PoissonHerbivore.h"

////////////////////// Carnivores //////////////////////

class Thon :
	public PoissonCarnivore
{
public:
	Thon(std::string nom, int sexe);
	~Thon();
};

class Merou :
	public PoissonCarnivore
{
public:
	Merou(std::string nom, int sexe);
	~Merou();
};

class PoissonClown :
	public PoissonCarnivore
{
public:
	PoissonClown(std::string nom, int sexe);
	~PoissonClown();
};

////////////////////// Herbivores //////////////////////

class Sole :
	public PoissonHerbivore
{
public:
	Sole(std::string nom, int sexe);
	~Sole();
};

class Bar :
	public PoissonHerbivore
{
public:
	Bar(std::string nom, int sexe);
	~Bar();
};

class Carpe :
	public PoissonHerbivore
{
public:
	Carpe(std::string nom, int sexe);
	~Carpe();
};	


