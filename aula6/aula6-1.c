#include <stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d", &dia);

    if (dia < 1 || dia > 31)
    {
        printf("Dia invalido");
        return 0;
    }

    printf("Digite o mes: ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12)
    {
        printf("Mes invalido");
        return 0;
    }

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano < 1)
    {
        printf("Ano invalido");
        return 0;
    }

    printf("Data: %d/%d/%d", dia, mes, ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("\nAno bissexto");
    }
    else
    {
        printf("\nAno nao bissexto");
    }
}