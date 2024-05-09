/******************************************************************************
Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média e mostre na tela. 
No final, analise a média e mostre se o aluno teve ou não um bom aproveitamento 
(se ficou acima da média 7.0). 


*******************************************************************************/
#include <stdio.h>

float calculaMedia(int nota1, int nota2){
    return (nota1 + nota2) / 2;
}

int main()
{
    char nome_do_aluno[50];
    float nota1, nota2, media;
    printf("Nome do aluno: ");
    scanf("%s", nome_do_aluno);
    printf("--------------------------\n");
    printf("Registro de %s : \n", nome_do_aluno);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    media = calculaMedia(nota1, nota2);
    if(media < 7){
        printf("Você não teve um bom aproveitamento :(");
    }else{
        printf("Parabens! Suas notas foram excelentes!");
    }
    printf("\nSua media final foi: %.2f ", media);

    return 0;
}
