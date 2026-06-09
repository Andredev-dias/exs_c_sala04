#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1, n2, resp;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if(n1 == 0 || n2 == 0){
        printf("Não se divide por 0");
    }else{
        resp = n1 / n2;
        printf("%.2f",resp);
    }

    system("pause");
    return 0;
}
