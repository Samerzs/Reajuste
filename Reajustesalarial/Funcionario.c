#include <stdio.h>
#include <conio.h>
#include "Funcionario.h"

    // Função para ler os dados do funcionário
void funcionario(char nome [50], float *salario, int *tempoempresa){

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", salario);
    printf("Digite o tempo de empresa do funcionario (em anos): ");
    scanf("%d", tempoempresa);
}
// Função para calcular o reajuste salarial e o salario atual do funcionário + desconto de 8% do INSS
void reajustesalario(float *salario, float *percentual, float *reajuste, int *tempoempresa, float *salarioatual) {
    if(*tempoempresa < 1) {
        *percentual = 0.05;
        *reajuste = *salario * *percentual;
        *salarioatual = (*salario + *reajuste) - (*salario + *reajuste) * 0.08;
    }if(*tempoempresa >= 1 && *tempoempresa < 5) {
        *percentual = 0.1;
        *reajuste = *salario * *percentual;
        *salarioatual = (*salario + *reajuste) - (*salario + *reajuste) * 0.08;
    }if(*tempoempresa >= 5) {
        *percentual = 0.15;
        *reajuste = *salario * *percentual;
        *salarioatual = (*salario + *reajuste)- (*salario + *reajuste)*0.08;
    }

}
// Função para exibir as informações atualizadas do funionário
void exibirinfo(float *salarioatual,float *percentual,float *reajuste,float *salario,char nome[50]){
    printf("=====Informações do Funcionário=====\n");
    printf("Nome do Funcionario: %s\n", nome);
    printf("O salario antigo do funcionario e: %.2f\n", *salario);
    printf("O valor de reajuste atual e de: %.2f\n", *reajuste);
    printf("O valor do percentual de reajuste e de: %.2f%%\n", *percentual*100);

    // Mensagem Especial Caso o salario atual seja maior que 10000
    if(*salarioatual>10000){
        printf("Parabens seu salario atual é de: %.2f\n", *salarioatual);
    }else{
        printf("O salario atual do funcionario e: %.2f\n", *salarioatual);
    }
}