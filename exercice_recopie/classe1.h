#pragma once
#include <string>
#include "NouvelleClasse.h"
using namespace std;

class Classe1
{
private:
	int valeur;
	NouvelleClasse objet;
public:
	Classe1();
	Classe1(int valeur, int nombre, string phrase);
	Classe1(const Classe1&);
	~Classe1();
	int getValeur() const;
	int getNombre() const;
	string getPhrase() const;
};

