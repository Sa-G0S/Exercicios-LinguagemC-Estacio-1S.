//Denvolva um programa que leia a porcentagem do reajuste de salários de 50 funcinários, mostre os salários sem o reajuste e depois calcule e mostre os salários já com a porcentagem do valor reajustado, e por fim mostre o maior salário.//

#include <stdio.h>

int main()
{
float percreaj,salario,salarioreaj,maiorsal;
int cont;
maiorsal=0;

printf("Informe o percentual de reajuste salarial:");
scanf ("%f",&percreaj);

for (cont=1;cont<=50;cont++);
{
printf("Informe o salario do funcionario:");
scanf("%f",&salario);

salarioreaj=salario+(salario*percreaj/100);

printf("O salario reajustado e : %.2f \n\n",salarioreaj);

if (salarioreaj>maiorsal)

 maiorsal=salarioreaj;
}
printf("O maior salario reajustado e : %.2f",maiorsal);
return 0;
}

