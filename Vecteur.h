#ifndef vecteur_h
#define vecteur_h

using TypeVecteur = int;

struct Vecteur {

	size_t taille = 0;
	size_t capacite = 0;
	TypeVecteur* valeurs = nullptr;
};

Vecteur initialiserVecteur(size_t capacite = 5);
void detruireVecteur(Vecteur& v);
bool vecteurEstVide(const Vecteur& v);

void ajouter(Vecteur& v, const TypeVecteur& daya);
void retirerDernier(Vecteur& v);
void viderVecteur(Vecteur& v);

Vecteur copierVecteur(const Vecteur& source);

void afficherVecteur(const Vecteur& v);

void reserver(Vecteur& v, size_t nouvelleCapacite);

#endif