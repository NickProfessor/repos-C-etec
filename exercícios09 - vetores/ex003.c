/******************************************************************************

Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo diretamente) 
um vetor numérico com 10 posições, conforme abaixo:

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista[10];
    for(int indice = 0; indice < 10; indice++){
        if(indice % 2 == 0){
            lista[indice] = 5;
        }else{
            lista[indice] = 3;
         }
        
        printf("A posição %d tem o valor de %d \n", indice, lista[indice]);
    }
    
    
    return 0;
}
