/******************************************************************************
Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade 
dela e depois mostre se ela pode ou não votar. 


*******************************************************************************/
#include <stdio.h>

int sujeitoMaiorDeIdade(int nascimento){
    if(nascimento <= 2006){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int nascimento;
    printf("Qual foi o ano que você nasceu?\n");
    scanf("%d", &nascimento);
    if(sujeitoMaiorDeIdade(nascimento)){
        printf("Boa! Você já é maior de idade");
    }else{
        int anosQueFaltam = nascimento - 2006;
        printf("Que pena! Você ainda tem que completar 18 anos. Isso vai levar aproximadamente %d anos", anosQueFaltam);
    };

    return 0;
}
