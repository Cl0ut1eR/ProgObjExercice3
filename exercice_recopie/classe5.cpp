#include "Classe5.h"

Classe5::Classe5()
{
	valeur = 0;
	tableauObjet[0] = NULL;
	tableauObjet[1] = NULL;
	tableauObjet[2] = NULL;
}
Classe5::Classe5(int inValeur, int inNombre, string inPhrase) 
{
	valeur = inValeur;
	tableauObjet[0] = new NouvelleClasse(inNombre, inPhrase);
	tableauObjet[1] = NULL;
	tableauObjet[2] = NULL;
}

int Classe5::getValeur() const
{
	return valeur;
}

int Classe5::getNombre() const
{
	if (tableauObjet[0] != NULL)
		return tableauObjet[0]->getNombre();
	else
		return 0;
}

string Classe5::getPhrase() const
{
	if (tableauObjet[0] != NULL)
		return tableauObjet[0]->getPhrase();
	else
		return "";
}
