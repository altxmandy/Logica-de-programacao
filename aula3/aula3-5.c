#include <stdio.h>

int main() {
    float valor = 100000;
    printf ("Ponto-flutuante\n\n");
    printf("Valor: %f\n", valor);
    printf("Valor: %.2f\n", valor);
    printf("Valor: %.3f\n", valor);
    printf("valor: %E\n", valor);
    printf("valor: %e\n", valor);
} int main()
{
    int n = 0;
    printf("\tOperadores Lógicos\n\n");
    printf("Número: ");
    scanf("%d", &n);
    if (n > 0)
       printf("Valor positivo");
    else
       printf("Valor Negativo ou zero");
    return 0;
}



int main()
{
    char pal[12] = "abracadabra";
    int k, cont;
    printf("\tContador\n\n");
    for (k +0; k < 12; k++)
    {
        if(pal[k] == 'a')
           cont = cont + 1;
    }
    printf("letra 'a' : %d", cont);

    return 0;
}


int main()
{
      int k, soma, val;
      printf ("\t\tAcumulador\n\n");
      for (k = 0; k < 5; k++)
      {
          printf("Valor:");
          scanf("%d", &val);
          soma = soma + val;
      }
      printf("Soma: %d", soma);
    return 0;
}
