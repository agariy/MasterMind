#include <stdio.h>
#include <stdlib.h>

int main()
{   

    //constantes
    const int TAILLE_CODE = 4;
    const int NB_COLORS = 5;
    const int MAX_TENTATIVE = 3;

    //variables
    char code_secret[4] = {'R', 'V', 'J', 'O'};
    char saisi_user[TAILLE_CODE];

    printf("MASTER MIND DEV BY AGARIY :)\n");

    for(int nb_tentative = 0; nb_tentative < MAX_TENTATIVE; nb_tentative++)
    {
        printf("Tentative: %d/%d\n", nb_tentative, MAX_TENTATIVE);
        printf(">> ");
        fflush(stdin);
        scanf("%c%c%c%c", saisi_user, (saisi_user+1), (saisi_user+2), (saisi_user+3));
        
        int nb_bonne_place = 0;
        for(int i = 0; i < TAILLE_CODE; i++)
        {
            if(code_secret[i] == saisi_user[i])
            {
                nb_bonne_place++;
            }
        }
        if(nb_bonne_place == TAILLE_CODE)
        {
            printf("Bravo tu as trouvé la bonne compositions !!!!\n");
            break;
        }
        else if(nb_tentative == MAX_TENTATIVE)
        {
            printf("Vous avez plus de vie le bon code était %s", code_secret);
            break;
        }
        else
        {
            printf("Nombre de couleur à la bonne place : %d\n", nb_bonne_place);
            printf("Nombre de couleur à la mauvaise place: %d\n", TAILLE_CODE - nb_bonne_place);
        }

        
    }
    

    return 0;
}