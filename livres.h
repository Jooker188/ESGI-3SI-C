#ifndef LIVRES_H
#define LIVRES_H

#define MAX_LIVRES 100
#define MAX_TITRE 100
#define MAX_AUTEUR 100
#define MAX_CATEGORIE 50

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


void ajouter_livre(Livre* livres, int* nb_livres);
void supprimer_livre(Livre* livres, int* nb_livres);
void modifier_livre(Livre* livres, int nb_livres);
void afficher_livres(Livre* livres, int nb_livres);
void rechercher_livre(Livre* livres, int nb_livres);
void menuLivres();

#endif
