/*Escreva um programa que leia três números e determine se eles formam uma
progressão aritmética.*/

#include <stdio.h>

int main(){
    int n;            //valor a ser inserido
    scanf("%d",&n);
    int m;            //valor a ser inserido
    scanf("%d",&m);
    int z;            //valor a ser inserido
    scanf("%d",&z);
    if(z-m == m-n){            //verificação se os valores formam uma progressão aritmética
        printf("formam uma progressao aritmetica");
    }else{
        printf("nao formam uma progressao aritmetica");
    }
}