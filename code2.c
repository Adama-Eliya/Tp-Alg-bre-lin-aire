#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float nbrm = 1000000;
    float nbra = 500000;
    int annee = 0;
    while (nbra < nbrm)
    {
        nbra = nbra * 1.08;
        nbrm = nbrm + 50000;
        annee ++;
    }
    printf("le nombre d'annee est : %d",annee);
    
    return 0;
}
