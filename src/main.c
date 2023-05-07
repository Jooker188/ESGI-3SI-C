#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotheque.h"

int main() {
    int choix;
    int check;

    while (1) {
        printf("\n********* Menu Principal *********\n");
        printf("1. Livres\n");
        printf("2. Membres\n");
        printf("3. Quitter\n");
        printf("\nEntrez votre choix : ");

        check = scanf("%2d", &choix);

        if (check != 1) {
            printf("Saisie invalide. Veuillez saisir un nombre.\n");
            while (getchar() != '\n'); // Vider le flux d'entrée en vidant le tampon
        }
        else {
            if (choix < 1 || choix > 3) {
                printf("Choix invalide. Veuillez saisir un nombre entre 1 et 3.\n");
            }
            else {
                switch (choix) {
                    case 1:
                        menuLivres();
                        break;
                    case 2:
                        menuMembres();
                        break;
                    case 3:
                        return 0; // Quitter le programme
                }
            }
        }
    }

    return 0;
}

void menuLivres() {

    Livre livres[MAX_LIVRES];
    int nbLivres = 0;

    int choix = 0;
    // Boucle pour le sous-menu "Livres"
    while (choix != 5) {
        printf("\n********* Menu Livres *********\n");
        printf("1. Ajouter un livre\n");
        printf("2. Modifier un livre\n");
        printf("3. Supprimer un livre\n");
        printf("4. Afficher les livres\n");
        printf("5. Retour au menu principal\n");
        printf("\nEntrez votre choix : ");
        scanf("%2d", &choix);

        switch (choix) {
            case 1:
                // Appel de la fonction pour ajouter un livre
                ajouter_livre(livres, &nbLivres);
                break;
                /*
            case 2:
                // Appel de la fonction pour modifier un livre
                modifier_livre();
                break;
            case 3:
                // Appel de la fonction pour supprimer un livre
                supprimer_livre();
                break;
            case 4:
                // Appel de la fonction pour supprimer un livre
                afficher_livres();
                break;
            */
            case 5:
                // Retour au menu principal
                break;
                
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    }
}

void menuMembres() {

    /*
    Membre membres[MAX_MEMBRES];
    int nbMembres = 0;
    */

    int choix = 0;
    // Boucle pour le sous-menu "Membres"
    while (choix != 4) {
        printf("\n********* Menu Membres *********\n");
        printf("1. Ajouter un membre\n");
        printf("2. Modifier un membre\n");
        printf("3. Supprimer un membre\n");
        printf("4. Retour au menu principal\n");
        printf("\nEntrez votre choix : ");
        scanf("%2d", &choix);
        
        switch (choix) {
            /*
            case 1:
                // Appel de la fonction pour ajouter un membre
                ajouter_membre();
                break;
            case 2:
                // Appel de la fonction pour modifier un membre
                modifier_membre();
                break;
            case 3:
                // Appel de la fonction pour supprimer un membre
                supprimer_membre();
                break;
            */
            case 4:
                // Retour au menu principal
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
        
    }
}