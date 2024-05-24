/******************************************************************************

Crie um programa que preencha automaticamente (usando lógica, não apenas atribuindo diretamente) 
um vetor numérico com 10 posições, conforme abaixo:

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tamanhoDaLista;
   printf("Qual é o tamanho da sua lista?\n");
   scanf("%d", &tamanhoDaLista);
    int lista[tamanhoDaLista];
    for(int indice = 0; indice < tamanhoDaLista; indice++){
        lista[indice] = tamanhoDaLista - indice -1;
        printf("A posição %d tem o valor de %d \n", indice, lista[indice]);
    }
    
    
    return 0;
}
