#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, resultado;

    printf("Verificando se o número é primo ou não.\n");
    printf("Digite um número para a verificação.\n");
    scanf("%d",&num);

    for(int i=2; i<=num/2; i++){
        if(num % i == 0){
            resultado++;
            break;
        }
    }
    if(resultado == 0){
        printf("Esse número é primo\n");
    }
    else{
        printf("Esse número não é primo\n");
    }

}
