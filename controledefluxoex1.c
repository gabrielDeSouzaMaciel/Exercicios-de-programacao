/*Escreva um programa para ler um valor e escrever se é positivo ou negativo.
Considere o valor zero como positivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;            //valor a ser inserido
    scanf("%d",&n);
    if(n >= 0){      //verificação se o valor é positivo
        printf("positivo");
        exit(0);
    }
    printf("negativo");
}