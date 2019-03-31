#include "pch.h"
#include "Aquarium.h"


Aquarium::Aquarium()
{
	srand(time(NULL));
}


Aquarium::~Aquarium()
{
}

void Aquarium::PasserTemps()
{
	//// Actions ////

	//Initialisation
	for (auto &poisson : T_Poisson)
	{
		poisson->SetEstNourri(false);
		if (poisson->GetHP() > 5)
		{
			poisson->SetEstNourri(true);
		}
		poisson->SetHP(-1); //Starvation
		poisson->IncrAge(); //Ageing
	}
	for (auto &algue : T_Algue) 
	{
		algue->SetHP(1);; //Growth
	}

	// Manger
	if (!T_Poisson.empty())
	{
		TPoisson *T_ANourrir = new TPoisson();
		PoissonPasNourri(OUT T_ANourrir);

		while (!T_ANourrir->empty())
		{
			Poisson* Pred = (*T_ANourrir)[rand() % T_ANourrir->size()];

			if (Pred->GetTypeNourriture())
			{
				if (T_Poisson.size() == 1)
				{
					Pred->SetEstNourri(true);
				}
				else
				{
					TPoisson *T_Proie = new TPoisson;
					for (auto &poisson : T_Poisson)
					{
						if (poisson->GetID() != Pred->GetID())
						{
							T_Proie->push_back(poisson);
						}
					}

					if (T_Proie->size() == 0) { Pred->SetEstNourri(true); }
					else 
					{
						Poisson *Proie = (*T_Proie)[rand() % T_Proie->size()];

						Pred->Manger(Proie);
						std::cout << Pred->GetName() << " graille " << Proie->GetName() << std::endl;
					}		
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

void Aquarium::AfficherAquarium()
{
	std::cout << std::endl << "Il y a " << T_Algue.size() << " algue(s) et " <<
		T_Poisson.size() << " poisson(s) dans l'aquarium.\n" << std::endl;
}

int Aquarium::GetTPoissonSize()
{
	return T_Poisson.size();
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

