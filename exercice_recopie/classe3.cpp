#include "classe3.h"

Classe3::Classe3():tableauObjet()
{
}
Classe3::Classe3(int inNombre, string inPhrase)
	: tableauObjet()
{
	tableauObjet[0].setNombre(inNombre);
	tableauObjet[0].setPhrase(inPhrase);
}

int Classe3::getNombre() const
{
	return tableauObjet[0].getNombre();
}

string Classe3::getPhrase() const
{
	return tableauObjet[0].getPhrase();
}
