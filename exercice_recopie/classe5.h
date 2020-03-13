#pragma once
#include <string>
#include "NouvelleClasse.h"
using namespace std;

class Classe5
{
private:
	int valeur;
	NouvelleClasse* tableauObjet[3];
public:
	Classe5();
	Classe5(int valeur, int nombre, string phrase);
	int getValeur() const;
	int getNombre() const;
	string getPhrase() const;
};

