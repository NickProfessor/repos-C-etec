/******************************************************************************
Faça um algoritmo que leia um determinado ano e mostre se ele é ou não BISSEXTO. 


*******************************************************************************/
#include <stdio.h>

int esseAnoEhBissexto(int ano){
    if(ano % 4 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int ano;
    printf("Esse número é bissexto? -> ");
    scanf("%d", &ano);
    if(esseAnoEhBissexto(ano)){
        printf("%d é um ano bissexto", ano);
    }else{
        printf("%d não é um ano bissexto", ano);
    }

    return 0;
}
