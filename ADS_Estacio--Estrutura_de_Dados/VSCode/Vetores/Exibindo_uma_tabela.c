#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //Exkibindo uma tabela:
    /**
    O Programa abaixo inicializa os dez elementos
    de um array com os valores: 2,4,6... 200 e imprime
    o vetor em um formato de tabela
    **/

    
    #define TAMANHO 10
    setlocale(LC_ALL, "PORTUGUESE");
    int vetor[TAMANHO], i;

    vetor[0] = 2;
    for(i=0; i<= TAMANHO - 1; i++){
        vetor[i] = 2 + 2*i;
    }
    printf("%s %13s\n", "Elemento", "Valor");
           for (i=0; i<= TAMANHO - 1; i++){
            printf("%5d %14d\n", i, vetor[i]);
           }
    
}
