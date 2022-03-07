//Desenvolva um algoritmo que leia dados inteiros e armazene-os em uma matriz 3x4. Em seguida, mostre a quantidade de números pares e ímpares armazenados na matriz.//

#include <stdio.h>

int main()
{
    int mat[3][4],lin,col,contpar=0,contimpar=0;
    printf("\nInsira os numeros para os elementos da matriz: \n\n");
    for(lin=0;lin<3;lin++)
    for(col=0;col<4;col++)
    {
        printf("\nElemento[%d][%d]=",lin,col);
        scanf("%d",&mat[lin][col]);
    }
   printf("\n\n*******************Saida de dados********************\n\n");
   for(lin=0;lin<3;lin++)
    for(col=0;col<4;col++)
    {
        if(mat[lin][col] %2==0)
        contpar++;
        else
        contimpar++;
    }
    printf("\nPares%d",contpar);
    printf("\nImpares%d",contimpar);
    
return 0;
}
