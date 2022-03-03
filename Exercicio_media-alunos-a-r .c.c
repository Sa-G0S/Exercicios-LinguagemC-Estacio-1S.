//Denvolva um programa que leia 3 notas de 40 alunos, calcule a média da turma e a situação de aprovado ou reprovado.//

#include <stdio.h>

int main()
{

float nota1,nota2,nota3,media;
int contalunos;

for (contalunos=1;contalunos<=40;contalunos++)
{
    printf("Digite a nota1 do aluno: ");
    scanf("%f",&nota1);
    
    printf("Digite a nota2 do aluno: ");
    scanf("%f",&nota2);
    
    printf("Digite a nota3 do aluno: ");
    scanf("%f",&nota3);
}
   media=(nota1+nota2+nota3)/3;
    
   if (media>=7)
{
printf("Parabéns voce foi APROVADO com média : %.2f",media);
}
else
{
printf("Infelizmente voce foi REPROVADO com média : %.2f",media);
}
return 0;
}


