//Desenvolva um algoritmo que leia dados inteiros e armazene-os em uma matriz 4x4. E gere uma segunda matriz onde as colunas da 1º sejam as linhas da 2º e as linhas da 1º sejam as colunas da 2º.//
#include <stdio.h>

int main()
{
    int matpri[4][4],matseg[4][4],lin,col;
    printf("\nInsira os numeros para os elementos da primeira matriz: \n\n");
    for(lin=0;lin<4;lin++)
    for(col=0;col<4;col++)
    {
        scanf("%d",&matpri[lin][col]);
        matseg[col][lin]=matpri[lin][col];
    }
    printf("\nMatriz gerada\n");
    for(lin=0;lin<4;lin++)
    {
        for(col=0;col<4;col++)
        printf("%d",matseg[lin][col]);
        printf("\n");
    
    }
  
    
return 0;
}
