#include <stdio.h>

/**/

int main(){
    int n;
    printf("primeiro numero: ");
    scanf("%d",&n);
    int m;
    printf("segundo numero: ");
    scanf("%d",&m);
    int somaDosDivisoresN = 0;
    int divisoresN = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            divisoresN = i;
            somaDosDivisoresN += i;
        }
    }
    int somaDosDivisoresM = 0;
    int divisoresM = 0;
    for(int i = 1; i < n; i++){
        if(m % i == 0){
            divisoresM = i;
            somaDosDivisoresM += i;
        }
    }
    int amigos = somaDosDivisoresN == m && somaDosDivisoresM == n;
    if(amigos)
        printf("Sao numeros amigos.\n");
    else
        printf("Nao sao numeros amigos.\n");
}