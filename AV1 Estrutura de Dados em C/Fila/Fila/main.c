#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void enfileirar(int valor, int filamento[], int *endereco, int *filaCheia, int *filaVazia) {
    if(*endereco < 100){
        filamento[*endereco] = valor;
        (*endereco)++;
        *filaCheia = 0;
        *filaVazia = 0;
    }else{
        *filaCheia = 1;
        *filaVazia = 0;
        }
}

void desifileirar(int filamento[], int *endereco, int *filaVazia, int *filaCheia){
    if(*endereco > 0){
        (*endereco)--;
        for (int i = 0; i < *endereco; i++){
        filamento[i] = filamento [i+1];
        }
        *filaCheia = 0;
        *filaVazia = 0;
    }else{
    *filaCheia = 0;
    *filaVazia = 1;
    }
}

void exibir_fila(int filamento[], int *endereco){
    for(int i = 0; i < *endereco; i++){
    printf("[%d] ", filamento[i]);
    }
    printf("\n");
}

void verificar_fila(int *filaCheia, int *filaVazia){
    if(*filaCheia == 1){
        printf("\n ATENÇÃO: Fila está cheia não foi possível adicionar, remova um item \n\n");
    }else if(*filaVazia == 1){
        printf("\n ATENÇÃO: Fila está vazia não foi possível desifeileirar, adicione um item \n\n");
    }
}

int main(void) {
    setlocale(LC_ALL, "portuguese");
    int endereco = 0;
    int fila[100];
    int opcao = 0;
    int valor = 0;
    int filaCheia = 0;
    int filaVazia = 0;
    int exibir = 0;

    do{
    system("cls"); // Limpa o terminal
    if(exibir == 1){
        system("cls"); // Limpa o terminal
        printf("Conteúdo da Fila: \n");
        exibir_fila(fila, &endereco);
        printf("\n");
    }

    if(opcao == 4){
        printf("\n\n Opção inválida \n\n");
    }
    exibir = 0;
    verificar_fila(&filaCheia, &filaVazia);
    printf("Digite \n 1 - Enfileirar \n 2 - Desenfileirar \n 3 - Exibir Fila \n 0 - Sair \n Opção: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Informe o valor a ser Enfileirado: ");
        scanf("%d", &valor);
        enfileirar(valor, fila, &endereco, &filaCheia, &filaVazia);
        }
    else if(opcao == 2){
        desifileirar(fila, &endereco, &filaVazia, &filaCheia);
        }
    else if(opcao == 3){
        exibir = 1;
        }
    else if(opcao == 0){
        printf("Aplicação Encerrada");
        break;
    }else{
        opcao = 4;;
    }

    }while(opcao != 0);
    return 0;
}
