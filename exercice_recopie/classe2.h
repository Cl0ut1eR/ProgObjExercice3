#pragma once
#include <string>
#include "NouvelleClasse.h"
using namespace std;

class Classe2
{
private:
	int valeur;
	NouvelleClasse* objet;
public:
	Classe2();
	Classe2(int valeur, int nombre, string phrase);
	Classe2(const Classe2&);
	~Classe2();
	int getValeur() const;
	int getNombre() const;
	string getPhrase() const;
};

