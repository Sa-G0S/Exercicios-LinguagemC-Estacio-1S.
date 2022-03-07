//Desenvolva um algoritmo que leia dados inteiros e armazene-os em uma matriz 5X5, onde a matriz seja composta de 1 e 0, e o zero inicie na 1ºposição da 1º linha, e vá se deslocando para a direito em cada linha subsequente.//
#include <stdio.h>

int main()
{

int mat[5][5],lin,col;
for(lin=0;lin<5;lin++ )
{
    for(col=0;col<5;col++)
    {
        mat[lin][col]=1;
        if(lin==col)
        mat[lin][col]=0;
        printf("%d",mat[lin][col]);
    }

    printf ("\n");
}

return 0;
}
