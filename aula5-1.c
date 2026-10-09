#include <stdio.h>
int main()
{
    float salario;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    if(salario>=9500)
    {
        printf("Salario: %.2f\nDesconto IRPF: %.2f\nTaxa IRPF: %.2f%%\nDesconto INSS: %.2f\nTaxa INSS: %.2f%%\nDescontos Totais: %.2f\nSalario Líquido: %.2f\n", 
            salario, salario*0.10, 0.10, 
            salario*0.12, 0.12, salario*0.22, 
            salario*(1-0.22));
    }
    else 
    {
        printf("Salario: %.2f\nDesconto IRPF: %.2f\nTaxa IRPF: %.2f%%\nDesconto INSS: %.2f\nTaxa INSS: %.2f%%\nDescontos Totais: %.2f\nSalario Líquido: %.2f\n",
             salario, salario*0.05, 0.05,
              salario*0.12, 0.12, salario*0.17,
              salario*(1-0.17));
    }
}