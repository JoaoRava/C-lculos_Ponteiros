/******************************************************************************
Cálculos com ponteiros
*******************************************************************************/
#include <stdio.h>

void calcularComPonteiros(int a, int b, int* soma, int* subtracao, int* multiplicacao, float* divisao) {
    *soma = a + b;
    *subtracao = a - b;
    *multiplicacao = a * b;
    *divisao = (float)a / b;
}

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    return (float)a / b;
}

int main() {
    int a = 10, b = 5;
    int soma, subtracao, multiplicacao;
    float divisao;

    calcularComPonteiros(a, b, &soma, &subtracao, &multiplicacao, &divisao);

    printf("Cálculos simples com ponteiros:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    int x = 8, y = 4;

    printf("\nCálculos com as quatro operações usando funções:\n");
    printf("Soma: %d\n", somar(x, y));
    printf("Subtração: %d\n", subtrair(x, y));
    printf("Multiplicação: %d\n", multiplicar(x, y));
    printf("Divisão: %.2f\n", dividir(x, y));

    return 0;
}
