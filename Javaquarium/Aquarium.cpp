#include "pch.h"
#include "Aquarium.h"


Aquarium::Aquarium()
{
}


Aquarium::~Aquarium()
{
}

void Aquarium::PasserTemps()
{
	//// Actions ////

	// Manger
	std::vector<Poisson*> buffer = TabPoisson;
	while (buffer.size() > 0)
	{
		int rd = rand() % buffer.size(); //TODO create a function
		Poisson *poisson = buffer[rd];
		buffer.erase(buffer.begin() + rd);

		if (poisson->GetTypeNourriture() && buffer.size() > 0)
		{
			int rd1 = rand() % buffer.size();
			Poisson *poisson1 = buffer[rd1];
			poisson->Manger(poisson1);
			buffer.erase(buffer.begin() + rd1);
		}

		else if (!poisson->GetTypeNourriture() && TabAlgue.size() > 0)
		{
			poisson->Manger(TabAlgue[-1]);
			TabAlgue.erase(TabAlgue.end());
		}

		//TODO delete the eaten fish
	}

	std::cout << "Il y a " << TabAlgue.size() << " algue(s) et " << 
		TabPoisson.size() << " poisson(s) dans l'aquarium.\n" << 
		"Liste des poissons :\n";

	for (auto &poisson : TabPoisson) 
	{
		std::cout << poisson->GetName() << ", ";
		switch (poisson->GetSexe())
		{
		case 1:
			std::cout << "male\n";
			break;
		case 2:
			std::cout << "femelle\n";
			break;
		case 0:
			std::cout << "hermaphrodite\n";
			break;
		default:
			break;
		}
	}

	std::cout << std::endl;
}

void Aquarium::AjouterPoisson(Poisson * poisson)
{
	TabPoisson.push_back(poisson);
	return;
}

void Aquarium::AjouterAlgue(Algue * algue)
{
	TabAlgue.push_back(algue);
	return;
}

