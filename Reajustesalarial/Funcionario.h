#include <stdio.h>
#include <conio.h>



void funcionario(char nome[50], float *salario, int *tempoempresa);
void reajustesalario(float *salario, float *percentual, float *reajuste,int *tempoempresa, float *salarioatual);
void exibirinfo(float *salarioatual, float *percentual, float *reajuste, float *salario, char nome[50]);