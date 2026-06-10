#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int validarCPF(char cpf[]) {
    int i, soma, resto;
    int digito1, digito2;

    // Verifica se tem 11 caracteres
    if (strlen(cpf) != 11) {
        return 0;
    }

    // Verifica se todos os dígitos são iguais
    int todosIguais = 1;
    for (i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            todosIguais = 0;
            break;
        }
    }

    if (todosIguais) {
        return 0;
    }

    // Cálculo do primeiro dígito verificador
    soma = 0;
    for (i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }

    resto = soma % 11;

    if (resto < 2) {
        digito1 = 0;
    } else {
        digito1 = 11 - resto;
    }

    // Cálculo do segundo dígito verificador
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }

    resto = soma % 11;

    if (resto < 2) {
        digito2 = 0;
    } else {
        digito2 = 11 - resto;
    }

    // Verifica os dígitos
    if (digito1 == (cpf[9] - '0') &&
        digito2 == (cpf[10] - '0')) {
        return 1; // CPF válido
    }

    return 0; // CPF inválido
}

int main() {
    char cpf[12];

    printf("Digite o CPF (somente numeros): ");
    scanf("%11s", cpf);

    if (validarCPF(cpf)) {
        printf("CPF valido!\n");
    } else {
        printf("CPF invalido!\n");
    }

    system("pause");
    return 0;
}