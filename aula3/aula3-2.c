#include <stdio.h>

int main()
{
    int n = 5;
    printf(" Operadores Aritméticos de atribuição\n\n");
    n = n + 10;
    printf("n: %d\n", n);
    n = 5;
    n += 10;
    printf("n: %d\n", n);
    printf("------------------------\n");
    n = 5;
    n *= 3;  // n= n*3;
    printf("n: %d\n", n);
    return 0;
   
}