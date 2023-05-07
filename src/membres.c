#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotheque.h"

/*
// Tableau pour stocker tous les membres de la bibliothèque
static Membre membres[MAX_MEMBRES];

// Nombre actuel de membres dans la bibliothèque
static int nb_membres = 0;

// Ajoute un nouveau membre avec les informations données
void ajouter_membre(int id, const char* nom, const char* prenom, const char* date_naissance) {
    // Vérifie que l'ID n'existe pas déjà
    if (rechercher_membre_par_id(id) != NULL) {
        printf("Erreur : un membre avec l'ID %d existe déjà.\n", id);
        return;
    }

    // Vérifie qu'il y a de la place pour un nouveau membre
    if (nb_membres >= MAX_MEMBRES) {
        printf("Erreur : la bibliothèque est pleine (nombre maximum de membres atteint).\n");
        return;
    }

    // Crée un nouveau membre avec les informations données
    Membre membre;
    membre.id = id;
    strcpy(membre.nom, nom);
    strcpy(membre.prenom, prenom);
    strcpy(membre.date_naissance, date_naissance);
    membre.nb_emprunts = 0;

    // Ajoute le membre à la bibliothèque
    membres[nb_membres] = membre;
    nb_membres++;

    printf("Le membre %d a été ajouté avec succès.\n", id);
}

// Supprime le membre avec l'ID donné
void supprimer_membre(int id) {
    // Recherche le membre dans la bibliothèque
    Membre* membre = rechercher_membre_par_id(id);
    if (membre == NULL) {
        printf("Erreur : aucun membre avec l'ID %d n'a été trouvé.\n", id);
        return;
    }

    // Vérifie que le membre n'a pas de livres empruntés
    if (membre->nb_emprunts > 0) {
        printf("Erreur : le membre avec l'ID %d a encore des livres empruntés. Veuillez les retourner avant de supprimer le membre.\n", id);
        return;
    }

    // Supprime le membre de la bibliothèque
    int index = membre - membres; // calcule l'index du membre dans le tableau
    memmove(membres + index, membres + index + 1, (nb_membres - index - 1) * sizeof(Membre)); // décale les membres suivants vers la gauche
    nb_membres--;

    printf("Le membre avec l'ID %d a été supprimé avec succès.\n", id);
}
*/