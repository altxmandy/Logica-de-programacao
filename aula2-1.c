#include <stdio.h>

int main() {
    int limite = 99;
    float salario = 1000.50;
    char letra = 'A';   
    printf("\tTipos\n");
    printf("limite: %d\n", limite);
    printf("salario: %.2f\n", salario);
    printf("letra: %c\n", letra);
    printf("-------------------------\n");
    printf("\tAlocacao de memoria\n");
    printf("Tipo Int: %d bytes\n", sizeof(int));
    printf("Tipo Float: %d bytes\n", sizeof(float));
    printf("Tipo Char: %d bytes\n", sizeof(char));
    printf("Tipo Double: %d bytes\n", sizeof(double));
    printf("Tipo Long: %d bytes\n", sizeof(long));
    printf("tipo Short int: %d bytes\n", sizeof(short int));
    printf("letra: %d\n", letra);
    return 0;
}

//%d -> especificador de formato para inteiros
//%f -> especificador de formato para float
//%.2f -> especificador de formato para float com 2 casas decimais  
//%c -> especificador de formato para char
//%u -> especificador de formato para unsigned int
