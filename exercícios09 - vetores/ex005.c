/******************************************************************************

Faça um programa que preencha automaticamente um vetor numérico com 8 posições, 
conforme abaixo:

*******************************************************************************/
#include <stdio.h>

int main()
{
   
    int lista[8];
    for(int indice = 0; indice < 8; indice++){
        lista[indice] = 999;
        printf("A posição %d tem o valor de %d \n", indice, lista[indice]);
    }
    
    
    return 0;
}
