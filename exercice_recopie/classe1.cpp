#include "classe1.h"

Classe1::Classe1():objet()
{
	valeur = 0;
}
Classe1::Classe1(int inValeur, int inNombre, string inPhrase) 
	: objet(inNombre, inPhrase)
{
	valeur = inValeur;
}

Classe1::Classe1(const Classe1& inClass) : objet(inClass.objet)
{
	valeur = inClass.getValeur();
}

Classe1::~Classe1()
{
}

int Classe1::getValeur() const
{
	return valeur;
}

int Classe1::getNombre() const
{
	return objet.getNombre();
}

string Classe1::getPhrase() const
{
	return objet.getPhrase();
}
