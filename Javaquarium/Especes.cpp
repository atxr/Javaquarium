#include "pch.h"
#include "Especes.h"


Thon::Thon(std::string nom, int sexe) : PoissonCarnivore(nom,sexe, 1)
{
}

Thon::~Thon()
{
}

Merou::Merou(std::string nom, int sexe) : PoissonCarnivore(nom, sexe, 2)
{
}

Merou::~Merou()
{
}

PoissonClown::PoissonClown(std::string nom, int sexe) : PoissonCarnivore(nom, sexe, 3)
{
}

PoissonClown::~PoissonClown()
{
}

Sole::Sole(std::string nom, int sexe) : PoissonHerbivore(nom, sexe, -1)
{
}

Sole::~Sole()
{
}

Bar::Bar(std::string nom, int sexe) : PoissonHerbivore(nom, sexe, -2)
{
}

Bar::~Bar()
{
}

Carpe::Carpe(std::string nom, int sexe) : PoissonHerbivore(nom, sexe, -3)
{
}

Carpe::~Carpe()
{
}
