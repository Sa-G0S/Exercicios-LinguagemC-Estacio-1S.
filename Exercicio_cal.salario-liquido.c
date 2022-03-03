//Desenvolva um programa que leia o salário bruto de 15 funcionários, calcule e exiba o salário líquido de cada funcionário.//

#include <stdio.h>

int main()
{
    float salbruto, salliquido, imposto,totbruto=0, totliquido=0,totimposto=0;
    int contfunc;
    
    for(contfunc=1;contfunc<=15;contfunc++);
    {
        printf("Insira o salario bruto: ");
        scanf("%f",&salbruto);
        if (salbruto >999)
imposto = salbruto*0.10;
else
if (salbruto >1999)
imposto = salbruto*0.15;
else
if (salbruto >9999)
imposto = salbruto*0.20;
else
if (salbruto >99999)
imposto = salbruto*0.25;
else
imposto = salbruto*0.30;
salliquido = salbruto - imposto;
        
        printf("Salario liquido = %.2f\n",salliquido);
        
        totbruto=totbruto+salbruto;
        totliquido=totliquido+salliquido;
        totimposto=totimposto+imposto;
        }
        
        printf("Total salario bruto: %.2f\n",totbruto);
        printf("Total salario liquido: %.2f\n",totliquido);
        printf("Total salario liquido: %.2f\n",totimposto);
        
        return 0;
}
