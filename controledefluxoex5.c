/*Um posto está vendendo combustíveis com a tabela de descontos abaixo. Escreva
um programa que leia o número de litros vendidos, o tipo de combustível
(codificado da seguinte forma: 1: etanol e 2: gasolina), o preço do combustível,
calcule e imprima o valor a ser pago pelo cliente.
Etanol:
-Até 20 litros, desconto de 3% por litro.
-Acima de 20 litros, desconto de 5% por litro.
Gasolina:
-Até 15 litros, desconto de 3,5% por litro.
-Acima de 15 litros, desconto de 6% por litro.*/

#include <stdio.h>

int main(){
    int litros;            //numero de litros vendidos
    printf("numero de litros vendidos: ");
    scanf("%d",&litros);
    int tipo;            //tipo de combustível (1: etanol e 2: gasolina)
    printf("tipo de combustivel (1-etanol,2-gasolina): ");
    scanf("%d",&tipo);
    float preco;            //preço do combustível
    printf("preco do combustivel: ");
    scanf("%f",&preco);
    float preco_final = 0;          //armazena o valor do preço final
    switch(tipo){
        case 1:            //se o valor escolhido foi etanol
            if(litros <= 20){
                preco_final = (preco*litros) - ((3.0/100)*(preco*litros));
            }else{
                preco_final = (preco*litros) - ((5.0/100)*(preco*litros));
            }
            break;
        case 2:            //se o valor escolhido foi gasolina
            if(litros <= 15){
                preco_final = (preco*litros) - ((3.5/100)*(preco*litros));
            }else{
                preco_final = (preco*litros) - ((6/100)*(preco*litros));
            }
            break;
        default:
            printf("Tipo de combustivel invalido");
            return 1;
    }
    printf("valor a ser pago pelo cliente: %.2f",preco_final);
}