#pragma once
class Nourriture
{
public:
	Nourriture();
	~Nourriture();
	virtual bool GetTypeNourriture() = 0;
	bool GetEstVivant();
	void SetEstVivant(bool b = false);
private:
	bool EstVivant;
};

