#pragma once
#include <string>
#include "NouvelleClasse.h"
using namespace std;

class Classe3
{
private:
	NouvelleClasse tableauObjet[3];
public:
	Classe3();
	Classe3(int nombre, string phrase);
	int getNombre() const;
	string getPhrase() const;
};

