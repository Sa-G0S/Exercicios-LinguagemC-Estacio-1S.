//Desenvolva um algoritmo que leia dados inteiros e armazene-os em uma matriz 4x4. Porém, não armazene o numero lido na diagonal principal, mas sim zero..//

#include <stdio.h>

int main()
{
    int mat[4][4],lin,col;
    printf("\nInsira os numeros para os elementos da matriz: \n\n");
    for(lin=0;lin<4;lin++)
    for(col=0;col<4;col++)
    if(lin==col)
    {
        printf("\nElemento[%d][%d]=",lin,col);
        mat[lin][col]=0;
    }
    else
    {
    printf("Elemento[%d][%d]= ",lin,col);
    scanf("%d",&mat[lin][col]);
    }
   printf("\nListagem dos elementos da matriz\n");
   for(lin=0;lin<4;lin++)
    for(col=0;col<4;col++)
    printf("\nElemento[%d][%d]=%d",lin,col,mat[lin][col]);
    
return 0;
}
