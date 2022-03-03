//Desenvolva um programa que leia uma sequência de letras de a-z,e mostre quantas vezes cada vogal aparece.//

#include <stdio.h>

int main()
{
    char letra;
    int conta=0, conte=0, conti=0, conto=0, contu=0;
    
    scanf("%c",&letra);
    while(letra!='.')
    {
        switch(letra)
        {
            case 'a':
            conta++;break;
            
            case 'e':
            conte++;break;
            
            case 'i':
            conti++;break;
            
            case 'o':
            conto++;break;
            
            case 'u':
            contu++;break;
        }
    
        scanf("%c",&letra);
    }
    
printf("Toda de letras 'a': %d\n",conta);
printf("Toda de letras 'e': %d\n",conte);
printf("Toda de letras 'i': %d\n",conti);
printf("Toda de letras 'o': %d\n",conto);
printf("Toda de letras 'u': %d\n",contu);
    return 0;
}
