#pragma once
#include <string>
using namespace std;

class Classe4
{
private:
	int* valeurs[3];
public:
	Classe4();
	Classe4(int valeur);
	Classe4(const Classe4&);
	~Classe4();
	int getValeur() const;
};

