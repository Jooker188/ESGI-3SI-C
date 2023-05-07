#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#define MAX_LIVRES 100
#define MAX_TITRE 100
#define MAX_AUTEUR 100
#define MAX_CATEGORIE 50
#define MAX_MEMBRES 100
#define MAX_EMPRUNTS 10

#define DISPO 0

typedef enum {
    ROMAN,
    SCIENCE_FICTION,
    HISTOIRE,
    AUTRE
} Categorie;

typedef enum {
    DISPONIBLE,
    EMPRUNTE,
    RESERVE
} Statut;

typedef struct {
    int id;
    char titre[MAX_TITRE];
    char auteur[MAX_AUTEUR];
    char categorie[MAX_CATEGORIE];
    Statut statut;
    int emprunteur_id;
} Livre;

typedef struct {
    int id;
    char nom[100];
    char prenom[100];
    char date_naissance[11]; // tableau des IDs des livres empruntés
    int livres_empruntes[10]; // nombre de livres actuellement empruntés
} Membre;

void ajouter_livre(Livre* livres, int* nb_livres);
void supprimer_livre(Livre* livres, int* nb_livres);
void modifier_livre(Livre* livres, int nb_livres);
void afficher_livres(Livre* livres, int nb_livres);
void rechercher_livre(Livre* livres, int nb_livres);
void emprunter_livre(Livre* livres, int nb_livres, Membre* membres, int nb_membres);
void retourner_livre(Livre* livres, int nb_livres, Membre* membres, int nb_membres);
void liste_livres_empruntes(Membre* membres, int nb_membres);
void ajouter_membre(Membre* membres, int* nb_membres);
void supprimer_membre(Membre* membres, int* nb_membres);
void modifier_membre(Membre* membres, int nb_membres);
void afficher_membres(Membre* membres, int nb_membres);
void liste_membres_livre(Livre* livres, int nb_livres, Membre* membres, int nb_membres);
void menuLivres();
void menuMembres();

#endif
