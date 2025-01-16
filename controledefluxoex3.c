/*Implemente um programa que leia um valor e informe se ele está dentro ou fora
do intervalo [25,50].*/

#include <stdio.h>

int main(){
    int n;            //valor a ser inserido
    scanf("%d",&n);
    if(n >= 25 && n <= 50){            //verificação se o valor está no intervalo [25,50]
        printf("dentro do intervalo [25,50]");
    }else{
        printf("fora do intervalo [25,50]");
    }
}