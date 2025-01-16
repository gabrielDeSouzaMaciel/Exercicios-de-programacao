/*Desenvolva um programa que leia dois números inteiros e verifique se o primeiro
é múltiplo do segundo.*/

#include <stdio.h>

int main(){
    int n;           //valor a ser inserido
    scanf("%d",&n);
    int m;           //valor a ser inserido
    scanf("%d",&m);
    if(n % m == 0){  //verificação ser o valor é múltiplo
        printf("multiplo"); 
    }else{
        printf("nao multiplo");
    }
}