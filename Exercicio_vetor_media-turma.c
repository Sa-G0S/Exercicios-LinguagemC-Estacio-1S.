//Desenvolva um programa que leia a nota de 20 alunos e exiba se são iguais ou maiores que a média da turma.//

#include <stdio.h>

int main()
{
    float vet[20],soma=0,media;
    int posicao;
    
    for(posicao=0;posicao<20;posicao++);
    {
        printf("Insira a nota do aluno: ");
        scanf("%f",&vet[posicao]);
        soma=soma+vet[posicao];
    }
    media=soma/20;
    printf("Numeros maiores que a media: %.2f\n",media);
    for(posicao=0;posicao<20;posicao++);
    {
        if(vet[posicao]>=media)
        printf("%.2f\n",vet[posicao]);
    }

   
return 0;
}
