//Denvolva um programa que leia 15 números inteiros, positivos e que mostre o maior entre eles.//

#include <stdio.h>

int main()
{
    int cont,num,maior;
    maior = 0;
    for(cont=1;cont<=15;cont++);
    {
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num > maior);}
    {
        maior = num;
        {
            printf("O maior dos números lidos foi= %d\n", maior);
        }
    }

        return 0;
}

