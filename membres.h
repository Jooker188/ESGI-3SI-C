#ifndef MEMBRES_H
#define MEMBRES_H

#define MAX_MEMBRES 100

typedef struct {
    char nom[100];
    char prenom[100];
    char date_naissance[11];
} Membre;

void ajouter_membre(Membre* membres, int* nb_membres);
void supprimer_membre(Membre* membres, int* nb_membres);
void modifier_membre(Membre* membres, int nb_membres);
void afficher_membres(Membre* membres, int nb_membres);
void menuMembres();

#endif
