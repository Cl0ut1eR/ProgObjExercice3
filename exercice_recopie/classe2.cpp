#include "Classe2.h"

Classe2::Classe2()
{
	valeur = 0;
	objet = NULL;
}
Classe2::Classe2(int inValeur, int inNombre, string inPhrase) 
{
	valeur = inValeur;
	objet = new NouvelleClasse(inNombre, inPhrase);
}

Classe2::Classe2(const Classe2& inClasse)
{
	valeur = inClasse.getValeur();
	objet = new NouvelleClasse(*(inClasse.objet));
}

Classe2::~Classe2()
{
	if (objet != NULL)
	{
		delete objet;
		objet = NULL;
	}
}

int Classe2::getValeur() const
{
	return valeur;
}

int Classe2::getNombre() const
{
	if (objet != NULL)
		return objet->getNombre();
	else
		return 0;
}

string Classe2::getPhrase() const
{
	if (objet != NULL)
		return objet->getPhrase();
	else
		return "";
}
