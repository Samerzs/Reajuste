#include <stdio.h>
#include <conio.h>
#include "Funcionario.h"

int main() {

    float salario, percentual, reajuste, salarioatual;
    int tempoempresa;
    char nome[50];

    funcionario(nome, &salario, &tempoempresa);
    reajustesalario(&salario, &percentual, &reajuste, &tempoempresa, &salarioatual);
    exibirinfo(&salarioatual, &percentual, &reajuste, &salario, nome);
    return 0;
}