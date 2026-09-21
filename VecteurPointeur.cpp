#include <iostream>

using namespace std;

using TypeVecteur = int;

struct Vecteur {

	size_t taille = 0;
	size_t capacite = 0;
	TypeVecteur* valeurs = nullptr;
};

Vecteur initialiserVecteur(size_t capacite = 5);
void detruireVecteur(Vecteur& v);
bool vecteurEstVide(const Vecteur& v);

int main() {

	int a;
	cin >> a;

	Vecteur test = initialiserVecteur(a);

	return 0;
}

Vecteur initialiserVecteur(size_t capacite) {

	Vecteur v;

	if (capacite > 0) {

		v.capacite = capacite;
		v.valeurs = new TypeVecteur[capacite]{};
	}

	return v;

}

void detruireVecteur(Vecteur& v){

	delete[] v.valeurs;
	v.valeurs = nullptr;  //nullptr -> null pointer; pointer la-bas pour dégager l'adresse

}
