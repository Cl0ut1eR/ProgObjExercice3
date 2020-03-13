
#include <iostream>
#include "classe1.h"
#include "classe2.h"
#include "classe3.h"
#include "classe4.h"
#include "classe5.h"
using namespace std;

void Afficher(Classe1);
void Afficher(Classe2);
void Afficher(Classe3);
void Afficher(Classe4);
void Afficher(Classe5);

int main()
{
	//numero 1
	Classe1 objet1(5, 10, "allo");
	cout << "Affichage 1 \n";
	Afficher(objet1);
	cout << "Affichage 2 \n";
	Afficher(objet1);
	cout << "------------------------------------------";

	//numero 2
	//Classe2 objet2(15, 20, "salut");
	//cout << "Affichage 1 \n";
	//Afficher(objet2);
	//cout << "Affichage 2 \n";
	//Afficher(objet2);
	//cout << "------------------------------------------";
	
	//numero 3
	//Classe3 objet3(30, "coucou");
	//cout << "Affichage 1 \n";
	//Afficher(objet3);
	//cout << "Affichage 2 \n";
	//Afficher(objet3);
	//cout << "------------------------------------------";

	//numero 4
	//Classe4 objet4(40);
	//cout << "Affichage 1 \n";
	//Afficher(objet4);
	//cout << "Affichage 2 \n";
	//Afficher(objet4);
	//cout << "------------------------------------------";

	//numero 5
	//Classe5 objet5(50, 100, "Helloooo");
	//cout << "Affichage 1 \n";
	//Afficher(objet5);
	//cout << "Affichage 2 \n";
	//Afficher(objet5);
}

void Afficher(Classe1 inObjet)
{
	cout << "\tvaleur: " << inObjet.getValeur() << "\n";
	cout << "\tnombre: " << inObjet.getNombre() << "\n";
	cout << "\tphrase: " << inObjet.getPhrase() << "\n";
}

void Afficher(Classe2 inObjet)
{
	cout << "\tvaleur: " << inObjet.getValeur() << "\n";
	cout << "\tnombre: " << inObjet.getNombre() << "\n";
	cout << "\tphrase: " << inObjet.getPhrase() << "\n";
}
void Afficher(Classe3 inObjet)
{
	cout << "\tnombre: " << inObjet.getNombre() << "\n";
	cout << "\tphrase: " << inObjet.getPhrase() << "\n";
}
void Afficher(Classe4 inObjet)
{
	cout << "\tvaleur: " << inObjet.getValeur() << "\n";
}
void Afficher(Classe5 inObjet)
{
	cout << "\tvaleur: " << inObjet.getValeur() << "\n";
	cout << "\tnombre: " << inObjet.getNombre() << "\n";
	cout << "\tphrase: " << inObjet.getPhrase() << "\n";
}