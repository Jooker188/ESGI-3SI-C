#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotheque.h"

void ajouter_livre(Livre* livres, int* nb_livres) {
    // Vérifier si le nombre maximum de livres est atteint
    if (*nb_livres >= MAX_LIVRES) {
        printf("Le catalogue est plein. Impossible d'ajouter un nouveau livre.\n");
        return;
    }

    Livre nouveauLivre;

    printf("Entrez les informations du nouveau livre :\n");
    
    printf("Titre : ");
    scanf("%29s", nouveauLivre.titre);

    printf("Auteur : ");
    scanf("%29s", nouveauLivre.auteur);

    printf("Catégorie : ");
    scanf("%29s", nouveauLivre.categorie);

    nouveauLivre.statut = DISPONIBLE; // Par défaut, le livre est disponible

    // Ajouter le nouveau livre au tableau
    livres[*nb_livres] = nouveauLivre;
    (*nb_livres)++;

    printf("\nLe livre a été ajouté avec succès.\n");
}

void supprimer_livre(Livre* livres, int* nb_livres) {
    // Supprimer un livre du catalogue
    // Code d'implémentation
}

void modifier_livre(Livre* livres, int nb_livres) {
    // Modifier les informations d'un livre existant
    // Code d'implémentation
}

void afficher_livres(Livre* livres, int nb_livres) {
    // Afficher la liste des livres dans le catalogue
    // Code d'implémentation
}

void rechercher_livre(Livre* livres, int nb_livres) {
    // Rechercher un livre par titre, auteur ou catégorie
    // Code d'implémentation
}

void emprunter_livre(Livre* livres, int nb_livres, Membre* membres, int nb_membres) {
    // Emprunter un livre pour un membre
    // Code d'implémentation
}

void retourner_livre(Livre* livres, int nb_livres, Membre* membres, int nb_membres) {
    // Retourner un livre emprunté par un membre
    // Code d'implémentation
}

void liste_livres_empruntes(Membre* membres, int nb_membres) {
    // Afficher la liste des livres empruntés par un membre
    // Code d'implémentation
}
