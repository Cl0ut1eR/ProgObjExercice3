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
