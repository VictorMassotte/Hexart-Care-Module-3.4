#ifndef __DONNEES_H__
#define __DONNEES_H__

#include <stdio.h>
#include <stdlib.h>
#include "actions.h"


typedef struct stat
{
    int donnee;
    int temps;

}STAT;


void afficher_donnees();
void afficher_donnees_tri_c();
void afficher_donnees_tri_d();
void afficher_temps_tri_c();
void afficher_temps_tri_d();
void afficher_recherche();
void afficher_donnees_moyenne();
void recherche_max_min();

#endif // __DONNEES_H__
