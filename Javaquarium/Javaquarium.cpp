// Javaquarium.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Aquarium.h"
#include "Especes.h"

int main()
{
	Aquarium *aquarium = new Aquarium();
	aquarium->AjouterAlgue(new Algue());
	aquarium->AjouterPoisson(new Merou("Matthieu", 1));
	aquarium->PasserTemps();
	aquarium->AjouterAlgue(new Algue());
	aquarium->AjouterPoisson(new PoissonClown("Greg", 1));
	aquarium->AjouterPoisson(new Bar("Baptiste", 1));
	aquarium->AjouterPoisson(new Carpe("Justine", 2));
	aquarium->PasserTemps();
	aquarium->PasserTemps();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
