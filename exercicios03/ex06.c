/******************************************************************************

Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua 
situação em relação ao alistamento militar. 
-Se estiver antes dos 18 anos, mostre em quantos anos faltam para o alistamento. 
-Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do alistamento. 

*******************************************************************************/
#include <stdio.h>

int calculaQuantosAnosFaltam(int nascimento){
    if(nascimento < 2006){
        return (nascimento - 2006);
    }else if(nascimento > 2006){
        return nascimento - 2006;
    }else{
        return 0;
    }
}

int main()
{
    int nascimento, anos_que_faltam;
    printf("Em que ano você nasceu?\n");
    scanf("%d", &nascimento);
    anos_que_faltam = calculaQuantosAnosFaltam(nascimento);
    if(anos_que_faltam > 0){
        
        printf("Você terá de se alistar daqui %d anos", anos_que_faltam);
    }else if(anos_que_faltam < 0){
        anos_que_faltam *= -1;
        printf("Você já se alistou há %d anos atrás", anos_que_faltam);
    }else{
        printf("Você deve se alistar esse ano!");
    }

    return 0;
}
