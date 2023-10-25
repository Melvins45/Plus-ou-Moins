#include <stdio.h> #include <stdlib.h> #include <time.h>
int main ( int argc, char** argv )
{
    long nombreMystere = 0, nombreEntre = 0;
    const long MAX = 1000, MIN = 0;
    // Génération du nombre aléatoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
     do
   {        // On demande le nombre
    printf("Quel est le nombre ? ");
    scanf("%ld", &nombreEntre);
        // On compare le nombre entré avec le nombre mystère
        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
           printf("C'est moins !\n\n");
        else
    printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
   } while (nombreEntre != nombreMystere);
    system("PAUSE");
}

