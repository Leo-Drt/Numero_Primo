#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, resultado;

    printf("Verificando se o n�mero � primo ou n�o.\n");
    printf("Digite um n�mero para a verifica��o.\n");
    scanf("%d",&num);

    for(int i=2; i<=num/2; i++){
        if(num % i == 0){
            resultado++;
            break;
        }
    }
    if(resultado == 0){
        printf("Esse n�mero � primo\n");
    }
    else{
        printf("Esse n�mero n�o � primo\n");
    }

}
