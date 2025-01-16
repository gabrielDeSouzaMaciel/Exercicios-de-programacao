/*Faça um programa que apresente o valor da série
de Leibniz contendo 50 termos, considerando que a série de Leibniz serve para conseguir
 um valor aproximado de pi e que funciona da seguinte forma:
π/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...*/

#include <stdio.h>

int main() {
    double pi = 0.0;            //inicializa a variável que armazenará o valor a ser cálculado

    for (int n = 0; n < 50; n++) {
        pi += ((n % 2 == 0 ? 1.0 : -1.0) / (2.0 * n + 1.0));            //cálculo dos 50 primeiros números da série de Leibniz
                                                                  //se o valor for par, o numerador é 1, se for ímpar, é -1

    }

    pi *= 4;

    printf("Valor com 50 termos: %.15f\n", pi);
}