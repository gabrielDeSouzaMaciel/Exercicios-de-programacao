/*Escreva um programa que calcule os 𝑛 primeiros termos da sequência de
Fibonacci. Considere que o 𝑘-ésimo termo da sequência é dado por
F(k) = F(k-1) + F(k-2), k > 1
e que
F(0) = 0
F(1) = 1*/

#include <stdio.h>

int main(){
    int n;            //posição que eu quero dentro da sequência de fibonacci
    scanf("%d",&n);
    int v[100];            //vetor que armazenará os resultados
    v[0] = 0;            //inicializa as primeiras posições
    v[1] = 1;            //inicializa as primeiras posições
    for(int i = 2; i < 100; i++){
        v[i] = v[i-1] + v[i-2];            //cálculo de qual elemento está na posição desejada
    }
    printf("%d",v[n]);
}