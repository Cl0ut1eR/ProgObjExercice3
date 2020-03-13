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

Classe3::Classe3(const Classe3& inClasse)
{
	for (int i = 0; i < inClasse.getQtyObj(); i++)
	{
		tableauObjet[i] = NouvelleClasse(inClasse.tableauObjet[i]);
	}
}

Classe3::~Classe3()
{
}

int Classe3::getNombre() const
{
	return tableauObjet[0].getNombre();
}

string Classe3::getPhrase() const
{
	return tableauObjet[0].getPhrase();
}

int Classe3::getQtyObj() const
{
	return qtyObjet;
}
