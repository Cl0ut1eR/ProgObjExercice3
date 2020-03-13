#include "NouvelleClasse.h"

NouvelleClasse::NouvelleClasse()
{
	nombre = 0;
	phrase = "";
}
NouvelleClasse::NouvelleClasse(int inNombre, string inPhrase)
{
	nombre = inNombre;
	phrase = inPhrase;
}
NouvelleClasse::NouvelleClasse(const NouvelleClasse& inClasse)
{
	nombre = inClasse.nombre;
	phrase = inClasse.phrase;
}
int NouvelleClasse::getNombre() const
{
	return nombre;
}

string NouvelleClasse::getPhrase() const
{
	return phrase;
}

void NouvelleClasse::setNombre(int inNombre)
{
	nombre = inNombre;
}

void NouvelleClasse::setPhrase(string inPhrase)
{
	phrase = inPhrase;
}

//NouvelleClasse::~NouvelleClasse()
//{
//}
