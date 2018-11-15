#include "menu.h"
#include "donnees.h"
#include "actions.h"

int choix;

int Menu()
{
    printf("---------------------------------------------\n");
    printf("--                                         --\n");
	printf("--       BIENVENUE SUR NOTRE MENU          --\n");
	printf("-- MERCI DE CHOISIR DANS LA LISTE SUIVANTE --\n");
	printf("--                                         --\n");
	printf("---------------------------------------------\n\n");

    printf("0. Quitter le menu\n");
	printf("1. Afficher toutes les donnees de notre ficher\n");
	printf("2. Afficher nos donnees trier dans l'ordre croissant selon le pouls\n");
	printf("3. Afficher nos donnees trier dans l'ordre decroissant selon le pouls\n");
	printf("4. Afficher nos donnees trier dans l'ordre croissant selon le temps\n");
	printf("5. Afficher nos donner trier dans l'ordre decroissant selon le temps\n");
	printf("6. Rechercher un pouls selon le temps\n");
	printf("7. Afficher la moyenne de pouls dans une plage de temps donnée\n");
	printf("8. Rechercher et afficher les max/min de pouls \n");
	printf("9. Compteur de ligne de la memoire\n");
    printf("\n");

	printf("Votre choix ?\n");
	scanf("%d", &choix);
	printf("\n\n");

	while(choix !=0 &&choix >=1 && choix <=9)
    {

        switch(choix)
        {
        case 1:
            afficher_donnees();
            break;
        case 2:
            afficher_donnees_tri_c();
            break;
        case 3:
            afficher_donnees_tri_d();
            break;
        case 4:
            afficher_temps_tri_c();
            break;
        case 5:
            afficher_temps_tri_d();
            break;
        case 6:
            afficher_recherche();
            break;
        case 7:
            afficher_donnees_moyenne();
            break;
        case 8:
            recherche_min_max();
            break;
        case 9:
            compteur();
            break;

        }
        printf("\n\n");
        printf("=============================================================================\n");
        printf("                           NOUVEAUX CHOIX    \n");
        printf("=============================================================================\n");
        printf("0. Quitter le menu\n");
        printf("1. Afficher toutes les donnees de notre ficher battements\n");
        printf("2. Afficher nos donnees trier dans l'ordre croissant selon le pouls\n");
        printf("3. Afficher nos donnees trier dans l'ordre decroissant selon le pouls\n");
        printf("4. Afficher nos donnees trier dans l'ordre croissant selon le temps\n");
        printf("5. Afficher nos donner trier dans l'ordre decroissant selon le temps\n");
        printf("6. Rechercher un pouls selon le temps\n");
        printf("7. Afficher la moyenne de pouls dans une plage de temps donnée\n");
        printf("8. Rechercher et afficher les max/min de pouls \n");
        printf("9. Compteur de ligne de la memoire\n");
        printf("\n\n");

        printf("Votre nouveau choix dans le menu ?\n");
        scanf("%d", &choix);
    }
    printf("\n\n");
    printf("Merci d'avoir utilise notre menu Hexa Core\n");
    return 0;
}
