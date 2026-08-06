#include <stdio.h>

int main() {
    int numero1=0, numero2=0, soma=0;

    printf("\tAlgoritmo de soma de dois numeros\n\n");

    printf("Digite o primeiro numero que deseja somar:");
    scanf("%d", &numero1);

    printf("Digite o segundo numero que deseja somar:");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("Resultado: %d\n", soma);

    printf("\n endereco de 'n1': %p", &numero1);
    printf("\n endereco de 'n2': %p", &numero2);
    printf("\n endereco de 'soma': %p", &soma);  
    return 0;
}

//#include -> diretiva de pré-processamento para incluir bibliotecas
// stdio.h -> biblioteca padrão de entrada e saída
// int main() -> função principal que retorna um inteiro
//& -> operador de endereço, usado para passar o endereço da variável para a função scanf
// \t -> tabulação horizontal
// int -> inteiro
// printf -> função de saída(exibir no terminal)
//scanf -> função de entrada(receber do terminal)
//%d -> especificador de formato para inteiros
//endereço de memória -> local na memória onde a variável está armazenada
//pointer -> variável que armazena o endereço de memória de outra variável
//return -> retorna um valor da função para o chamador

