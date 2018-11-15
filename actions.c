#include "actions.h"
#include "donnees.h"

//---------------------------------------------------------
void tri_croissant(STAT number[])
{
         STAT a;
         int n = 10;
         int swap = 0;
         int i = 0;

         do
         {
            swap = 0;
            for ( i = 0; i < ( n - 1 ); i++ )
            {
                if (number[i].donnee > number[i+1].donnee)
                {
                    a = number[i];
                    number[i] = number[i+1];
                    number[i+1] = a;
                    swap = 1;
                }
            }
         }
         while ( swap );

         for (int i = 0; i < 10; ++i) // Boucle pour affichage de toutes les valeurs trier
         {
         printf("Nos pouls tries sont %d bpm et avec le temps de %d ms\n", number[i].donnee, number[i].temps);
         }
}

//-----------------------------------------------------------------------------------------

void tri_decroissant(STAT number[])
{
        STAT a;
         int n = 10;
         int swap = 0;
         int i = 0;

         do
         {
            swap = 0;
            for ( i = 0; i < ( n - 1 ); i++ )
            {
                if (number[i].donnee < number[i+1].donnee)
                {
                    a = number[i];
                    number[i] = number[i+1];
                    number[i+1] = a;
                    swap = 1;
                }
            }
         }
         while ( swap );

         for (int i = 0; i < 10; ++i) // Boucle pour affichage de toutes les valeurs trier
         {
         printf("Nos pouls tries sont %d bmp avec le temps %d ms\n", number[i].donnee, number[i].temps);
         }
}

//-------------------------------------------------------------
void compteur(FILE *fic)
{
    fic = fopen("battements.csv", "r");
	int c;
	int nLignes = 0;

    if (fic == NULL)
    {
        printf("Impossible de trouver le fichier\n");
        exit (1);
    }

	while((c=fgetc(fic)) != EOF)
	{
		if(c=='\n')
			nLignes++;
	}

    fclose(fic);

	printf("Le nombre de ligne dans notre tableau de donnees est de: %d\n\n",nLignes);
}

//-------------------------------------------------------------------------
void tri_decroissant_temps(STAT number[])
{
         STAT a;
         int n = 10;
         int swap = 0;
         int i = 0;

         do
         {
            swap = 0;
            for ( i = 0; i < ( n - 1 ); i++ )
            {
                if (number[i].temps < number[i+1].temps)
                {
                    a = number[i];
                    number[i] = number[i+1];
                    number[i+1] = a;
                    swap = 1;
                }
            }
         }
         while ( swap );

         for (int i = 0; i < 10; ++i) // Boucle pour affichage de toutes les valeurs trier
         {
         printf("Le temps tries %d ms avec son pouls de %d bpm\n", number[i].temps, number[i].donnee);
         }
}

//----------------------------------------------------------------------------------------------------------------
void moyenne(STAT number[])
{
    int i=0, x=0, tmp=0, a=0, min=0, max=0;

    printf("Inserer le temps minimale : ");
    scanf("%d", &min);
    printf("Inserer le temps maximale : ");
    scanf("%d", &max);


    for(i = 0; i < 10; i++)
    {
        if(number[i].temps >= min && number[i].temps <= max)
        {
            tmp += number[i].donnee;
            x++;
        }
    }
    a = tmp / x;

    printf("La moyenne est donc de: %i\n", a);
}

//------------------------------------------------------------------------------------------
void tri_max_min(STAT number[])
{
         STAT a;
         int n = 10;
         int swap = 0;
         int i = 0;

         do
         {
            swap = 0;
            for ( i = 0; i < ( n - 1 ); i++ )
            {
                if (number[i].donnee > number[i+1].donnee)
                {
                    a = number[i];
                    number[i] = number[i+1];
                    number[i+1] = a;
                    swap = 1;
                }
            }
         }
         while ( swap );

         printf("Notre 1er valeur de pouls est de %d bpm avec son temps de %d ms\n", number[0].donnee, number[0].temps);
         printf("Notre derniere valeur de pouls est de %d bpm avec son temps de %d ms\n", number[9].donnee, number[9].temps);

}

//------------------------------------------------------------------------------------------------------------------------------------
