#include <stdio.h>

int main(){
    int x = 6;
    int y = 9;
    printf("Operador de incremento e decremento\n\n");
    y = ++x;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("--------------------------------------------------\n");
    x = 6;
    y = 9;
    y = x++;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    return 0;
   
}