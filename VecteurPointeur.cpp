#include <iostream>
#include "Vecteur.h"


Vecteur initialiserVecteur(size_t capacite) {

	Vecteur v;

	if (capacite > 0) {

		v.capacite = capacite;
		v.valeurs = new TypeVecteur[capacite]{};
	}

	return v;

}

void detruireVecteur(Vecteur& v) {

	delete[] v.valeurs;
	v.valeurs = nullptr;  //nullptr -> null pointer; pointer la-bas pour dégager l'adresse

}

bool vecteurEstVide(const Vecteur& v)
{
	return v.taille == 0;
}

void ajouter(Vecteur& v, const TypeVecteur& data) {

	if (v.taille == v.capacite) {

		reserver(v, v.capacite * 2);

	}

	v.valeurs[v.taille] = data;
	++v.taille;
}

void retirerDernier(Vecteur& v) {

	if (!vecteurEstVide(v)) {

		TypeVecteur element{};
		v.valeurs[v.taille - 1] = element;
		v.taille--;
	}

}

void viderVecteur(Vecteur& v) {

	TypeVecteur element{};

	for (size_t i = 0; i < v.taille; i++) {

		v.valeurs[i] = element;
	}

}

Vecteur copierVecteur(const Vecteur& source) {

	Vecteur copie = initialiserVecteur(source.capacite);

	copie.taille = source.taille;

	for (size_t i = 0; i < source.taille; i++) {

		copie.valeurs[i] = source.valeurs[i];

	}

	return copie;
}

void afficherVecteur(const Vecteur& v) {

	cout << "Vecteur de taille : " << v.taille << "[";

	for (size_t i = 0; i < v.taille; i++) {

		if (i > 0) {
			cout << ",";
		}

		cout << v.valeurs[i];

	}

	cout << "]" << endl;

}

void reserver(Vecteur& v, size_t nouvelleCapacite) {

	if (nouvelleCapacite <= v.capacite) {
		return;
	}

	TypeVecteur* copie = new TypeVecteur[nouvelleCapacite]{};

	for (size_t i = 0; i < v.taille; i++) {

		copie[i] = v.valeurs[i];

	}

	delete[] v.valeurs;

	v.valeurs = copie;
	v.capacite = nouvelleCapacite;
}


