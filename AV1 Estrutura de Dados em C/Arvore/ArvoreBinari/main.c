#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
visita(p) conteúdo do nó apontado por p
esquerda(p) ponteiro para o filho da esquerda de p

direita(p) ponteiro para o filho da direita de p

pai(p) ponteiro para o pai de p

irmão(p) ponteiro para o irmão de p

eh_esq(p) Retorna true se p é filho da esquerda e false, se filho
da direita

eh_dir(p) Retorna true se p é filho da esquerda e false, se filho
da direita
*/

struct elemento{
    int valor;
};
typedef struct elemento Elemento;

struct no{
    Elemento elemento;
    struct no *esquerda;
    struct no *direita;
};
typedef struct no No;

Elemento criarNovoElemento(int valor){
    Elemento element;
    element.valor = valor;
    return element;
}

No *inserir(No *raiz, Elemento Valor){
    if(raiz == NULL){
        No *novoNo = (No*)malloc(sizeof(No));
        novoNo->elemento = Valor;
        novoNo->direita = NULL;
        novoNo->esquerda = NULL;
        return novoNo;
    }else{
        if(Valor.valor > raiz->elemento.valor){
            raiz->direita = inserir(raiz->direita, Valor);
        }else if(Valor.valor < raiz->elemento.valor){
            raiz->esquerda = inserir(raiz->esquerda, Valor);
        }
    }
    return raiz;

}


void exibir(No *raiz){
    if(raiz != NULL){
    printf("[%d] ", raiz->elemento.valor);
    exibir(raiz->esquerda);
    exibir(raiz->direita);
    }
}

void limparNo(No *raiz){
    if(raiz != NULL){
        limparNo(raiz->esquerda);
        limparNo(raiz->direita);
        free(raiz);
    }
}

No *busca(No *raiz, int valor){
    if(raiz != NULL){
        if(raiz->elemento.valor == valor){
            return raiz;
        }else{
            if(raiz->elemento.valor < valor){
                return(raiz->direita, valor);
            }else{
                return(raiz->esquerda, valor);
            }
        }
    }
    return NULL;
}

No *menorNo(No *raiz){
    if(raiz != NULL){
        No *referencia = raiz->esquerda;
        while(referencia->esquerda !=NULL){
            referencia = referencia->esquerda;
        }
    return referencia;
    }
    return NULL;
}

No *remover(No *raiz, int valor){

    // Varre a arvore até que não tenha mais referência
    if(raiz != NULL){

        // Procura o valor no lado direito da arvore
        if(valor > raiz->elemento.valor){
            raiz->direita = remover(raiz->direita, valor);

        // Procura o valor no lado direito da arvore
        }else if (valor < raiz->elemento.valor){
            raiz->esquerda = remover(raiz->esquerda, valor);

        }else{// Se encontrar:

            // Caso o valor não tenha filhos remova
            if(raiz->esquerda == NULL && raiz->direita == NULL){
                free(raiz);
                return NULL;

            // Caso tenha filhos somente na direita, pegue referencia e delete
            }else if(raiz->esquerda == NULL && raiz->direita != NULL){
                No *referenciaSeguinte = raiz->direita;
                free(raiz);
                return referenciaSeguinte;

            // Caso tenha filhos somente na direita, pegue referencia e delete
            }else if(raiz->direita == NULL && raiz->esquerda != NULL){
                No *referenciaSeguinte = raiz->esquerda;
                free(raiz);
                return referenciaSeguinte;

            }else{// Caso tenha filho tanto na esquerda quanto a direita

                // Buscando referencia do menor valor
                No *referenciaMenorValor = menorNo(raiz->direita);
                // Fazendo uma copia do valor
                Elemento enderecoMenor = referenciaMenorValor->elemento;
                // Removendo No com o menor valor e SEM filhos da árvore
                raiz = remover(raiz, referenciaMenorValor->elemento.valor);
                // Passando copia do menor valor para a raiz
                raiz->elemento = referenciaMenorValor->elemento;
                // colocando menor valor como raiz da árvore
            }
        }
        return raiz;
    }
    return NULL;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    No *raiz = NULL;
    int opcao = NULL;
    int valor = NULL;
    int exibicao = 0;

    do{
        system("cls");
        if (exibicao == 1){
            printf("Conteúdo da Àrvore: ");
            exibir(raiz);
            printf("\n \n");
        }
        exibicao = 0;
        printf("Escolha uma das opções:\n"
            " 1 - Adicionar na Arvore\n"
            " 2 - Remover da lista \n"
            " 3 - Exibir  \n"
            " 0 - Sair \n"
            "Escolha opção: ");

        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Insira o valor: ");
            scanf("%d", &valor);
            raiz = inserir(raiz, criarNovoElemento(valor));
        }
        else if(opcao == 2){
            printf("Insira o valor a remover: ");
            scanf("%d", &valor);
            raiz = remover(raiz, valor);
        }
        else if(opcao == 3){
            exibicao = 1;
        }

    }while(opcao != 0);

    return 0;
}
