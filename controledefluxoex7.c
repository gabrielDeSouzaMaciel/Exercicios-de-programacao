/*Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se
que:
• Esse funcionário foi contratado em 2015, com salário inicial de R$
1.000,00.
• Em 2016, ele recebeu aumento de 0,25% sobre seu salário inicial.
• A partir de 2017 (inclusive), os aumentos salariais sempre corresponderam
ao dobro do percentual do ano anterior.
A partir disso, apresente um programa para determinar o salário atual desse
funcionário.*/

#include <stdio.h>

int main(){
    float percentual = 0.25/100;            //percentual de aumento incial
    float salario = 1000 + (1000*percentual);            //primeiro aumento (2016)
    for(int i = 2017; i <= 2025; i++){            //2017 até 2025
        percentual *= 2;            //percentual dobrado
        salario += salario*percentual;            //salário com aumento
    }
    printf("salario final: %f",salario);
}