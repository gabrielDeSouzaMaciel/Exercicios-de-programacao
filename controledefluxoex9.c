/*Usando o comando while, faça um programa que calcule o fatorial de um número
inteiro n.*/

#include <stdio.h>

int main(){
    int n;          //valor a ser inserido
    scanf("%d",&n);
    int fatorial = 1;
    int i = n;            //valor que multiplicará a variável fatorial
    while(i > 0){
        fatorial *= i;
        i--;            //decrementa i em 1
    }
    printf("fatorial: %d",fatorial);
}