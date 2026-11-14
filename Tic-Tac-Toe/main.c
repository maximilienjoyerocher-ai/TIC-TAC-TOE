#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "tictic.h"

int main()
{

    char tableau[10] = "         ";
    int i=0;
    while (i<9)
    {
        interface(tableau);
        if ( i%2 == 0)
        {
            tour(tableau);
        }
        else 
        {
            tourbot(tableau);
            sleep(2);
        }
        i=i+1;
        system("clear");
    }
   
    

    return 0;
}
