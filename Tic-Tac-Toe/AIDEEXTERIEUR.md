" J'ai utilisé gemini pour m'aider a trouver la condition de mon while et comprendre pourquoi ma verif joueur ne fonctionnait pas "
"int i=0;
    while (i<9)
    {
        interface(tableau);
        if ( i%2 == 0)
        {
            tour(tableau);
        }
    }
prompt : quel condition je pourrai utiliser pour faire une boucle while afin de faire un morpion a partir d'un tableau en c ? "

"int vérifjoueur(char * tab)
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
    return(0);"
}
    " prompt : est ce que tu pourrais m'expliquer pourquoi ma fonction verif joueur ne fonctionne pas "  