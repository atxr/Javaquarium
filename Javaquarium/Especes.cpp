#include "pch.h"
#include "Especes.h"


Thon::Thon(std::string nom, int sexe) : PoissonCarnivore(nom,sexe)
{
}

Thon::~Thon()
{
}

Merou::Merou(std::string nom, int sexe) : PoissonCarnivore(nom, sexe)
{
}

Merou::~Merou()
{
}

PoissonClown::PoissonClown(std::string nom, int sexe) : PoissonCarnivore(nom, sexe)
{
}

PoissonClown::~PoissonClown()
{
}

Sole::Sole(std::string nom, int sexe) : PoissonHerbivore(nom, sexe)
{
}

Sole::~Sole()
{
}

Bar::Bar(std::string nom, int sexe) : PoissonHerbivore(nom, sexe)
{
}

Bar::~Bar()
{
}

Carpe::Carpe(std::string nom, int sexe) : PoissonHerbivore(nom, sexe)
{
}

Carpe::~Carpe()
{
}
