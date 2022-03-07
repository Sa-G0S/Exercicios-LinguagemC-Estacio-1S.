//Desenvolva um programa que leia 50 numeros inteiros e verifique se algum dos números está em alguma posição do vetor.//

#include <stdio.h>

int main()
{
    const int tamvet=50,tamlista=10;
    int vet[tamvet],posicao,posvet,achou,numero;
    printf("\nInsira os numeros do vetor: \n");
    for (posicao=0;posicao<tamvet;posicao++)
    {
        scanf("%d",&vet[posicao]);
        printf("\nDigite os numeros a localizar: \n");
        for (posicao=0;posicao<=tamlista;posicao++)
        {
            scanf("%d",&numero);
            posvet=0;
            achou=0;
            while(posvet<=tamvet-1 && achou==0)
            {
                if(numero==vet[posvet])
                achou=1;
                else posvet++;
            }
            if(achou==1)
            printf("Achou na posicao: %d",posvet);
            else
            printf("Nao foi possivel localizar o numero");
        }
    }
    
return 0;
}
