#include "donnees.h"
#include "actions.h"
#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------------------------------
void afficher_donnees()
{
    int i = 0;
    FILE *fic;
    fic = fopen("battements.csv","r");
    STAT Tab[100];

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

    for( i = 0; i <10; i++)
    {
        fscanf(fic,"%i;%i", &Tab[i].donnee, &Tab[i].temps);
    }
    fclose(fic);

    for ( i = 0; i <10; i++)
    {
        printf("Pouls: %i bpm ", Tab[i].donnee);
        printf("Temps: %i ms\n", Tab[i].temps);

    }

}

//---------------------------------------------------------------------
void afficher_donnees_tri_c()
{
    FILE *fic = fopen("battements.csv","r");
    STAT Tab[100];

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

    for(int i = 0; i <10; i++)
    {
        fscanf(fic,"%i;%i", &Tab[i].donnee, &Tab[i].temps);
    }
    fclose(fic);

    tri_croissant(Tab);


}

//---------------------------------------------------------------------
void afficher_donnees_tri_d()
{
    FILE *fic = fopen("battements.csv","r");
    STAT Tab[100];

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

    for(int i = 0; i <10; i++)
    {
        fscanf(fic,"%i;%i", &Tab[i].donnee, &Tab[i].temps);
    }
    fclose(fic);

    tri_decroissant(Tab);
}

//----------------------------------------------------------------------------------
void afficher_temps_tri_c()
{
    int i = 0;
    FILE *fic;
    fic = fopen("battements.csv","r");
    STAT Tab[100];

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

    for( i = 0; i <10; i++)
    {
        fscanf(fic,"%i;%i", &Tab[i].donnee, &Tab[i].temps);
    }
    fclose(fic);

    for ( i = 0; i <10; i++)
    {
        printf("Temps: %i ms ", Tab[i].temps);
        printf("Pouls: %i bpm \n", Tab[i].donnee);

    }

}

//--------------------------------------------------------------------------
void afficher_temps_tri_d()
{

    FILE *fic = fopen("battements.csv","r");
    STAT Tab[100];

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }


    for(int i = 0; i <10; i++)
    {
        fscanf(fic,"%i;%i", &Tab[i].donnee, &Tab[i].temps);
    }
    fclose(fic);

    tri_decroissant_temps(Tab);

}

//----------------------------------------------------------------------------------------
void afficher_recherche()
{
    FILE *fic = fopen("battements.csv", "r");
    STAT Tab[100];
    int tmp;

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

    for (int i = 0; i < 100; i++)
        fscanf(fic, "%i;%i", &Tab[i].donnee, &Tab[i].temps);

    fclose(fic);

    printf("Debut de la recherche \n");

    printf(" Indiquer le temps a chercher:");
    scanf( "%d", &tmp);
    int ok = 0;

    for(int i = 0; i < 10; i++)
    {

        if(Tab[i].temps == tmp)
        {
            ok = 1;
            printf("Notre pouls est %d bpm a %d ms\n", Tab[i].donnee, tmp);
        }

    }

    if(ok == 0)
        printf("Notre valeur n'existe pas\n");

}

//---------------------------------------------------------------------------------
void afficher_donnees_moyenne()
{
    int i = 0;
    FILE *fic;
    fic = fopen("battements.csv","r");
    STAT Tab[100];

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

    for( i = 0; i <10; i++)
    {
        fscanf(fic,"%i;%i", &Tab[i].donnee, &Tab[i].temps);
    }
    fclose(fic);

    moyenne(&Tab);
}

//---------------------------------------------------------------------------------------
void recherche_min_max()
{
    FILE *fic = fopen("battements.csv","r");
    STAT Tab[100];

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

    for(int i = 0; i <10; i++)
    {
        fscanf(fic,"%i;%i", &Tab[i].donnee, &Tab[i].temps);
    }
    fclose(fic);

   tri_max_min(Tab);


}
