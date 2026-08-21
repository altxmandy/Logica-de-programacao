#include <stdio.h>

int main()
{
    int n1= 10, res = 0;
    printf("Operadores Aritmŕticos\n\n");
    res = n1 / 3;
    printf("Quctente: %d\n", res);
    res = n1 % 3;
    printf("Resto: %d\n", res);
    printf("----------------------------\n");
    res = n1 / 5 * 2;
    printf("Resultado: %d\n", res);
    res = (n1 / 5) * 2;
    printf("Resultado: %d\n", res);
    return 0;
   
}