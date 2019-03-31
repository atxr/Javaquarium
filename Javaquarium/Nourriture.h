#pragma once
class Nourriture
{
public:
	Nourriture();
	~Nourriture();
	virtual bool GetTypeNourriture() = 0;
	bool GetEstVivant();
	int GetHP();
	void SetHP(int degat);
protected:
	int HP;
};

