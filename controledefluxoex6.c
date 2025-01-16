/*Crie um programa que leia um conjunto não determinado de valores e mostre o
valor lido, seu quadrado, seu cubo e sua raiz quadrada. Finalize a entrada de dados
com um valor negativo ou zero.*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("Insira numeros inteiros positivos para calcular seu quadrado, cubo e raiz quadrada.\n");
    printf("Insira um numero menor ou igual a zero para sair.\n");

    int n;            //valor a ser inserido
    while (1){
        printf("Digite um numero: ");
        scanf("%d",&n);

        if(n <= 0){            //encerra se o valor inserido for menor ou igual a zero
            printf("Programa encerrado.\n");
            break;
        }

        printf("quadrado: %d\n",n*n);            //quadrado
        printf("cubo: %d\n",n*n*n);            //cubo
        printf("raiz quadrada: %f\n",sqrt(n));            //raiz quadrada
    }
}