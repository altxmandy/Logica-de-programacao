// operadores aritméticos exemplo código 

#include <stdio.h>
int main() {
    int a = 0, b = 0, c = 0;
    int operacao = 0;

    printf("Escolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Módulo\n");
    printf("Opção: ");
    scanf("%d", &operacao);

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    switch (operacao) {
        case 1:
            c = a + b;
            printf("Soma: %d\n", c);
            break;
        case 2:
            c = a - b;
            printf("Subtração: %d\n", c);
            break;
        case 3:
            c = a * b;
            printf("Multiplicação: %d\n", c);
            break;
        case 4:
            if (b == 0) {
                printf("Não é possível dividir por zero.\n");
            } else {
                c = a / b;
                printf("Divisão: %d\n", c);
            }
            break;
        case 5:
            if (b == 0) {
                printf("Não é possível calcular o módulo por zero.\n");
            } else {
                c = a % b;
                printf("Módulo: %d\n", c);
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}