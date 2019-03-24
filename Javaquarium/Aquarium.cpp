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

	//Initialiser appetit
	for (auto &poisson : T_Poisson)
	{
		poisson->SetEstNourri(false);
	}

	// Manger
	if (!T_Poisson.empty())
	{
		TPoisson *T_ANourrir = new TPoisson();
		PoissonPasNourri(OUT T_ANourrir);

		while (!T_ANourrir->empty())
		{
			//TODO securiser si tableau vide
			Poisson* Pred = (*T_ANourrir)[rand() % T_ANourrir->size()];

			if (Pred->GetTypeNourriture())
			{
				if (T_Poisson.size() == 1)
				{
					Pred->SetEstNourri(true);
				}
				else
				{
					Poisson* Proie;
					do
					{
						Proie = T_Poisson[rand() % T_Poisson.size()];
					} while (Proie == Pred);

					Pred->Manger(Proie);
				}

			}

			else if (!Pred->GetTypeNourriture())
			{
				if (T_Algue.size() > 0)
				{
					Pred->Manger(T_Algue[0]);
				}
				else
				{
					Pred->SetEstNourri(true);
				}
			}

			//Delete eaten food
			Update();
			PoissonPasNourri(OUT T_ANourrir);
		}
	}

	std::cout << "Il y a " << T_Algue.size() << " algue(s) et " << 
		T_Poisson.size() << " poisson(s) dans l'aquarium.\n" << 
		"Liste des poissons :\n";

	for (auto &poisson : T_Poisson) 
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
	T_Poisson.push_back(poisson);
	return;
}

void Aquarium::AjouterAlgue(Algue * algue)
{
	T_Algue.push_back(algue);
	return;
}


void Aquarium::PoissonPasNourri(OUT TPoisson * T_ANourrir)
{
	T_ANourrir->clear();
	for (int i=0; i<T_Poisson.size(); i++)
	{
		if (!T_Poisson[i]->GetEstNourri())
			T_ANourrir->push_back(&*T_Poisson[i]);
	}

	return;
}

void Aquarium::Update()
{
	TPoisson T_NewPoisson;
	for (auto &poisson : T_Poisson) {
		if (poisson->GetEstVivant())
		{
			T_NewPoisson.push_back(poisson);
		}
	}
	T_Poisson = T_NewPoisson;

	TAlgue T_NewAlgue;
	for (auto &algue : T_Algue) {
		if (algue->GetEstVivant())
		{
			T_NewAlgue.push_back(algue);
		}
	}
	T_Algue = T_NewAlgue;
}

