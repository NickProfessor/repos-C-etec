/******************************************************************************

Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos para todos, 
mas especialmente para mulheres. Faça um programa que leia nome, sexo e o valor das 
compras do cliente e calcule o preço com desconto. 

Sabendo que: 
-Homens ganham 5% de desconto 
-Mulheres ganham 13% de desconto

*******************************************************************************/
#include <stdio.h>

float aplicaDesconto(float valor, float desconto){
    return valor - (valor * desconto);
}

int main()
{
    char nome[50];
    char genero;
    float valor_sem_desconto, valor_com_desconto;
    printf("Você fára parte dessa promoção!!\n");
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite seu sexo. (M - Masculino, F-Feminino)\n");
    scanf("%c", &genero);
    printf("Digite o valor total da compra para aplicarmos um desconto\n");
    scanf("%f", &valor_sem_desconto);

    if(genero == 'M'){
        valor_com_desconto = aplicaDesconto(valor_sem_desconto, 0.05);
        printf("Seu nome é %s e você é um homem, por isso foi aplicado um desconto de 5%%", nome);
        printf("\nO valor da sua compra com desconto será de %.2f", valor_com_desconto);
    }else if(genero == 'F'){
        valor_com_desconto = aplicaDesconto(valor_sem_desconto, 0.13);
        printf("Seu nome é %s e você é uma mulher, por isso foi aplicado um desconto de 13%%", nome);
        printf("\nO valor da sua compra com desconto será de %.2f", valor_com_desconto);
    }else{
        printf("Você inseriu um valor inválido. Por favor, reinicie o programa");
    }
    return 0;
}
