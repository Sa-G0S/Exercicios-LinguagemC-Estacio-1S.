//Denvolva um programa que leia um número inteiro, e também uma lista de números inteiros, somando-os números pares e os números ímpares.//

#include <stdio.h>

int main()
{
int cont,num,listnum,somapar,somaimpar;
somapar= 0;
somaimpar= 0;

printf("Informe a quantida de numero da lista:");
scanf ("%d",&num);

for (cont=1;cont=num;cont++);
{
printf("Digite um numero:");
scanf("%d",&listnum);

if (listnum%2==0)
somapar=somapar+listnum;
else
somaimpar=somaimpar+listnum;
}

printf("A soma dos numeros pares e : %d\n",somapar);
printf("A soma dos numeros impares e : %d\n",somaimpar);
return 0;
}

