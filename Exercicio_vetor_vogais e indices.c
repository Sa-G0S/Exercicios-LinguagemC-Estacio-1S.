//Desenvolva um programa que leia e armazene a quantidade de vezes que cada vogal apareça em um indice diferente.//

#include <stdio.h>

int main()
{
    int vet[5]={0,0,0,0,0},posicao;
    char letra;
    {
        scanf("%c",&letra);
        while(letra!='z');
        {
            switch(letra)
            {
            case'a':
            vet[0]++;
            break;
            
            case'e':
            vet[1]++;
            break;
            
            case'i':
            vet[2]++;
            break;
            
            case'o':
            vet[3]++;
            break;
            
            case'u':
            vet[4]++;
            break;
            }
        }
        scanf("%c",&letra);
    }
    
    printf("Quantidade de cada vogal em ordem: \n");
    for(posicao=0;posicao<5;posicao++)
    {
        printf("%d",vet[posicao]);
    }
return 0;
}
