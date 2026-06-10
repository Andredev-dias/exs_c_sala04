#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i, numero;

    printf("Informe um número para tabuada: \n");
    scanf("%d", &numero);

    printf("\n T A B U A D A, pai de santo");
    printf("\n==============");

    for(i = 0; i<= 10; i++){
        printf("\n %d X %2d = %4d", numero, i, (numero * i));
    }

    printf("\n==============\n\n\n");
    
    system("pause");
    return 0;
}
