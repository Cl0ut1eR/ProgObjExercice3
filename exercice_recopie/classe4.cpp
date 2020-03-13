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

int Classe4::getValeur() const
{
	if (valeurs[0] != NULL)
		return *valeurs[0];
	else
		return 0;
}

