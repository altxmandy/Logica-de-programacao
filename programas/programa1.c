#include <stdio.h>

int main ()
{
    int valor1 = 0, valor2 = 0, produto = 0;
    printf("Programa 1 - Multiplicacao\n\n");
    printf("Numero 1: ");
    scanf("%d", &valor1);
    printf("Numero 2: ");
    scanf("%d", &valor2);
    produto = valor1*valor2; 
    printf("Resultado: %d\n", produto);
    return 0;
}