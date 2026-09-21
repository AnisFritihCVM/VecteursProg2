#include "Vecteur.h"

int main() {

	Vecteur v = initialiserVecteur();

	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);
	ajouter(v, 1);

	afficherVecteur(v);

	detruireVecteur(v);

	return 0;
}