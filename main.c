#include <stdio.h> #include <stdlib.h> #include <time.h>
int main ( int argc, char** argv )
{
    long nombreMystere = 0, nombreEntre = 0;
    const long MAX = 1000, MIN = 0;
    // G�n�ration du nombre al�atoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
     do
   {        // On demande le nombre
    printf("Quel est le nombre ? ");
    scanf("%ld", &nombreEntre);
        // On compare le nombre entr� avec le nombre myst�re
        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
           printf("C'est moins !\n\n");
        else
    printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
   } while (nombreEntre != nombreMystere);
    system("PAUSE");
}

