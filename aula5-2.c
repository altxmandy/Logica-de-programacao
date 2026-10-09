#include <stdio.h>
int main()
{
    float a, b, c, d, media;
    printf("1Nota: ");
    scanf("%f", &a);
    printf("2Nota: ");
    scanf("%f", &b);
    printf("3Nota: ");
    scanf("%f", &c);
    printf("4Nota: ");
    scanf("%f", &d);
    media=(a+b+c+d)/4;
    if(media>=6.0)
    {
        printf("Situação: Aprovado\n");
    }
    else
    {
        if(media<4.0)
        {
            printf("Situação: Reprovado\n");
        }
        else
        {
            if(media>=4 && media<6)
            {
                printf("Situação: Exame\n");
            }
        }
    }
}