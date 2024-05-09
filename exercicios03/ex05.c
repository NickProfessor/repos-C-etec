/******************************************************************************
Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, 
exiba uma mensagem dizendo que o usuário foi multado. 
Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida. 


*******************************************************************************/
#include <stdio.h>

float calcularValorDaMulta(int velocidadeKM){
    return (velocidadeKM - 80) * 5;
}

int main()
{
    
    int velocidadeKM;
    printf("Qual é a velocidade do carro?\n");
    scanf("%d", &velocidadeKM);
    if(velocidadeKM > 80){
        printf("PERDEU!! Você foi multado!");
        printf("O valor da multa foi de R$%.2f",calcularValorDaMulta(velocidadeKM));
    }else{
        printf("Teve sorte malandro! Você não foi multado");
    }

    return 0;
}
