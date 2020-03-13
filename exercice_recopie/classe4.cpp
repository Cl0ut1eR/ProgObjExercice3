#include "Classe4.h"

Classe4::Classe4()
{
	valeurs[0] = NULL;
	valeurs[1] = NULL;
	valeurs[2] = NULL;
}
Classe4::Classe4(int inValeur) 
{
	valeurs[0] = new int(inValeur);
	valeurs[1] = NULL;
	valeurs[2] = NULL;
}

Classe4::Classe4(const Classe4& inClasse)
{
	int cpt = 0;
	for (int* var : inClasse.valeurs)
	{
		valeurs[cpt] = NULL;
		if (var != NULL)
		{
			valeurs[cpt] = new int;
			*valeurs[cpt] = *inClasse.valeurs[cpt];
		}
		cpt++;
	}
}
Classe4::~Classe4()
{
	int cpt = 0;
	for (int* var : valeurs)
	{
		if (valeurs[cpt] != NULL)
		{
			delete valeurs[cpt];
			valeurs[cpt] = NULL;
		}
		cpt++;
	}
}

int Classe4::getValeur() const
{
	if (valeurs[0] != NULL)
		return *valeurs[0];
	else
		return 0;
}

