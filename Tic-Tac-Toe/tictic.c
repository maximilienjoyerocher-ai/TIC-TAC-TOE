#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void  interface(char * tab)
{
    printf("\n");
    printf(" %c | %c | %c \n",tab[0],tab[1],tab[2]);
    printf("  ------- \n");
    printf(" %c | %c | %c \n",tab[3],tab[4],tab[5]);
    printf("  ------- \n");
    printf(" %c | %c | %c \n",tab[6],tab[7],tab[8]);
    
}
int vérifjoueur(char * tab)
{
    if((tab[0]== 'X' && tab[1]== 'X' && tab[2]== 'X') || 
        (tab[3]== 'X' && tab[4]== 'X' && tab[5]== 'X') || 
        (tab[6]== 'X' && tab[7]== 'X' && tab[8]== 'X'))
    {
        return(1);
    }
    else if((tab[0]== 'X' && tab[3]== 'X' && tab[6]== 'X') || 
        (tab[1]== 'X' && tab[4]== 'X' && tab[7]== 'X') || 
        (tab[2]== 'X' && tab[5]== 'X' && tab[8]== 'X'))
    {
        return(1);
    }
    else if((tab[0]== 'X' && tab[4]== 'X' && tab[8]== 'X') || 
        (tab[2]== 'X' && tab[4]== 'X' && tab[6]== 'X'))
    {
        return(1);
    }
    else if((tab[0]== 'O' && tab[1]== 'O' && tab[2]== 'O') || 
        (tab[3]== 'O' && tab[4]== 'O' && tab[5]== 'O') || 
        (tab[6]== 'O' && tab[7]== 'O' && tab[8]== 'O'))
    {
        return(1);
    }
    else if((tab[0]== 'O' && tab[3]== 'O' && tab[6]== 'O') || 
        (tab[1]== 'O' && tab[4]== 'O' && tab[7]== 'O') || 
        (tab[2]== 'O' && tab[5]== 'O' && tab[8]== 'O'))
    {
        return(1);
    }
    else if((tab[0]== 'O' && tab[4]== 'O' && tab[8]== 'O') || 
        (tab[2]== 'O' && tab[4]== 'O' && tab[6]== 'O'))
    {
        return(1);
    }
    else if (tab[0]!=' ' && tab[1]!=' ' && tab[2]!= ' ' &&
        tab[3]!=' ' && tab[4]!=' ' && tab[5]!= ' ' &&
        tab[6]!=' ' && tab[7]!=' ' && tab[8]!= ' ')
    {
        printf("Match nul personne ne gagne !");
        exit(0);
    }
    return(0);
}

char * tour(char * tab)
{
    int valeur;
    int i=0;
    while (i==0)
    {
        printf("Choisissez où vous voulez jouer (0/8) : \n");
        scanf("%d", &valeur);
        if (valeur >= 0 && valeur <= 8) 
        {
            if(tab[valeur] != 'X' && tab[valeur] != 'O')
            {
                tab[valeur] = 'X';
                i=1;
                if(vérifjoueur(tab)==1)
                {
                    printf("BRAVO VOUS AVEZ GAGNEZ ! \n");
                    exit(0);

                }
            }
            else
            {
                printf("Case déjà utilisé veuillez réessayer \n");

            }
        }       
        else
        {
            printf("Erreur : veuillez entrer un chiffre entre 0 et 8.\n");
        }
    }
    return(tab);
}
char * tourbot(char * tab)
{
    
    int i=0;
    while(i==0)
    {
        srand(time(NULL));
        int random = rand() % 8+1;
        if(tab[random] != 'X' && tab[random] != 'O')
        {
            tab[random]='O';
            i=1;
            if(vérifjoueur(tab)==1)
            {
                printf("Dommage l'ordinateur a gagnez :( \n");
                exit(0);
            }
        }
    }
    return(tab);

}