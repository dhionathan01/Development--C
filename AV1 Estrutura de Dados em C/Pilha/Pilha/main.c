#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void empilhar(int valor, int pilha[], int *endereco, int *pilhaCheia, int *pilhaVazia) {
    if(*endereco < 100){
        pilha[*endereco] = valor;
        (*endereco)++;
        *pilhaCheia = 0;
        *pilhaVazia = 0;
    }else{
        *pilhaCheia = 1;
        *pilhaVazia = 0;
    }
}

void desempilhar( int *endereco, int *pilhaVazia, int *pilhaCheia){
    if(*endereco>0){
    (*endereco)--;
     *pilhaVazia = 0;
     *pilhaCheia = 0;
    }else{
        *pilhaVazia = 1;
        *pilhaCheia = 0;
    }
}

void exibir_pilha(int pilha[], int *endereco){
    for(int i = *endereco-1; i >= 0; i--){
        printf("[%d] ", pilha[i]);
    }
}

void verifica_pilha(int *pilhaCheia, int *pilhaVazia, int *endereco){
     if(*pilhaCheia == 1){
        printf("\n \n Atenção: Pilha está cheia Remova um item \n \n");
    }else{
    }

    if(*pilhaVazia == 1){
        printf("\n \n Pilha já está vazia tente adicionar algum item \n \n");
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int *endereco = 0;
    int pilha[100];
    int opcao;
    int valor;
    int exibicao = 0;
    int contador = 0;
    int pilhaCheia = 0;
    int pilhaVazia = 0;


 do{
    system("cls"); // Essa opção limpa a tela no terminal exibido pelo windows

    if (exibicao == 1){
        printf("Conteúdo da Pilha:\n\n  ");
        exibir_pilha(pilha, &endereco);
        printf("\n\n");
    }
    verifica_pilha(&pilhaCheia, &pilhaVazia, &endereco);

    exibicao = 0;

    printf("Escolha uma opção: \n1 - Empilhar \n2 - Desempilhar \n3 - Exibir  \n0 - Sair : \n" );
    printf("Opcao: ");
    scanf("%d", &opcao );
    if(opcao == 1){
        printf("Insira o valor a ser Empilhado: ");
        scanf("%d", &valor );
        empilhar(valor, pilha, &endereco, &pilhaCheia, &pilhaVazia);
    }
    else if(opcao == 2){
        printf("Desempilhamento Acionado \n");
        desempilhar(&endereco, &pilhaVazia, &pilhaCheia);
    }
    else if(opcao == 3){
        exibicao = 1;
    }
    else if (opcao == 0){
        break;
    }
    else{
        printf("Opcao Inválida");
    }
 }while(opcao != 0);



  return 0;
}
