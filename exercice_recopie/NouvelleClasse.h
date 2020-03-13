#pragma once
#include <string>
using namespace std;

class NouvelleClasse
{
private:
	int nombre;
	string phrase;
public:
	NouvelleClasse();
	NouvelleClasse(int, string);
	NouvelleClasse(const NouvelleClasse&);
	int getNombre() const;
	string getPhrase() const;
	void setNombre(int);
	void setPhrase(string);
};

