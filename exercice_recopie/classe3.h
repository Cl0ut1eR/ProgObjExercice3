#pragma once
#include <string>
#include "NouvelleClasse.h"
using namespace std;
const int qtyObjet = 3;
class Classe3
{
private:
	NouvelleClasse tableauObjet[qtyObjet];
public:
	Classe3();
	Classe3(int nombre, string phrase);
	Classe3(const Classe3&);
	~Classe3();
	int getNombre() const;
	string getPhrase() const;
	int getQtyObj() const;
};

