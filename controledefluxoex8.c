/*Usando o comando for, faça um programa que calcule o fatorial de um número
inteiro 𝑛.*/

#include <stdio.h>

int main(){
    int n;            //valor a ser inserido
    scanf("%d",&n);
    int fatorial = 1;
    for(int i = n; i > 0; i--){            //valor que multiplicará a variável fatorial vai do valor que foi inserido até 1
        fatorial *= i;            //cálculo do fatorial
    }
    printf("fatorial: %d",fatorial);
}