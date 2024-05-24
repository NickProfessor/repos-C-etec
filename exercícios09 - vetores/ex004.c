/******************************************************************************

Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo diretamente) 
um vetor numérico com 10 posições, conforme abaixo:

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lista[16];
    for(int indice = 0; indice < 16; indice++){
        if(indice == 0 || indice == 1){
            lista[indice] = 1;
        }else{
            lista[indice] = lista[indice - 1] + lista[indice - 2];
        }
        
        
        printf("A posição %d tem o valor de %d \n", indice, lista[indice]);
    }
    
    
    return 0;
}
