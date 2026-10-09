#include <stdio.h>

int main()
{
    int ano, mes, dia;
    int diasNoMes = 0;
    const char *nomeMes = "";

    printf("Validador de Data\n");

    printf("Digite o ano: ");
    scanf("%d", &ano);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        nomeMes = "Janeiro";
        diasNoMes = 31;
        break;

    case 2:
        nomeMes = "Fevereiro";

        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        {
            diasNoMes = 29;
        }
        else
        {
            diasNoMes = 28;
        }
        break;

    case 3:
        nomeMes = "Março";
        diasNoMes = 31;
        break;

    case 4:
        nomeMes = "Abril";
        diasNoMes = 30;
        break;

    case 5:
        nomeMes = "Maio";
        diasNoMes = 31;
        break;

    case 6:
        nomeMes = "Junho";
        diasNoMes = 30;
        break;

    case 7:
        nomeMes = "Julho";
        diasNoMes = 31;
        break;

    case 8:
        nomeMes = "Agosto";
        diasNoMes = 31;
        break;

    case 9:
        nomeMes = "Setembro";
        diasNoMes = 30;
        break;

    case 10:
        nomeMes = "Outubro";
        diasNoMes = 31;
        break;

    case 11:
        nomeMes = "Novembro";
        diasNoMes = 30;
        break;

    case 12:
        nomeMes = "Dezembro";
        diasNoMes = 31;
        break;

    default:
        printf("Mes invalido!\n");
        return 1;
    }

    printf("Digite o dia: ");
    scanf("%d", &dia);

    if (dia < 1 || dia > diasNoMes)
    {
        printf("Dia invalido para o mês %s!\n", nomeMes);
        return 1;
    }

    printf("Data valida: %02d/%02d/%d\n", dia, mes, ano);

    return 0;
}