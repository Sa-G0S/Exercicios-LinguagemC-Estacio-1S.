//Desenvolva um programa que leia 50 numeros inteiros e os armazene em vetores, respeitando a regra de que se o número for par ele deve ocupar a posição do vetor seguinte, se for ímpar deverá ocuoar a posição do vetor anterior.//

#include <stdio.h>

int main()
{
    const int tamvet=50;
    int vet1[tamvet],vet2[tamvet],posicao;
    for (posicao=0;posicao<tamvet;posicao++)
    {
        scanf("%d",&vet1[posicao]);
        if(vet1[posicao]%2 == 0)
        vet2[posicao]=vet1[posicao]+1;
        else
        vet2[posicao]=vet1[posicao]-1;
    }
    printf("Elementos VET1 e VET2: ");
    for(posicao=0;posicao<tamvet;posicao++);
    {
        printf("%d",vet1[posicao]);
        printf("%d",vet2[posicao]);
        
    }
    
return 0;
}
