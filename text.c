#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[50];
    printf("digite um nome: ");
    // scanf("%s", nome);
    fgets(nome, 50, stdin);
    printf("O nome informado foi: %s", nome);

    system("pause");
    return 0;
}
