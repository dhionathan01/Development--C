#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct Lista{
    int valor;
    struct Lista *proximo;
};
typedef struct Lista Lista;

typedef struct CabecaLista{
    Lista *inicioLista;
    int tamanhoLista;
}CabecaDaLista;


void inserirInicio(CabecaDaLista *lista, int valor){
    Lista *novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->valor = valor;
    novaLista->proximo = lista->inicioLista;
    lista->inicioLista = novaLista;
    lista->tamanhoLista++;
}

void exibir(CabecaDaLista *lista){
    Lista *inicio = lista->inicioLista;
    while(inicio != NULL){
    printf("[%d] ", inicio->valor);
    inicio = inicio->proximo;
    }

}

void inserirFim(CabecaDaLista *lista, int valor){
    Lista *novaStruturaIncremento, *novaStruturaInicio= (Lista*)malloc(sizeof(Lista));
    novaStruturaInicio->valor = valor;
    novaStruturaInicio->proximo = NULL;

    if(lista->inicioLista == NULL){
        lista->inicioLista = novaStruturaInicio;
    }else{
        novaStruturaIncremento = lista->inicioLista;
        while(novaStruturaIncremento->proximo != NULL){
            novaStruturaIncremento = novaStruturaIncremento->proximo;
        }

            novaStruturaIncremento->proximo = novaStruturaInicio;
    }
    lista->tamanhoLista++;
}

void remover(CabecaDaLista *lista, int valor){
    Lista *copia = lista->inicioLista;
    Lista *struturaRemover = NULL;


    if (lista->inicioLista != NULL){
        if(lista->inicioLista->valor == valor){
            struturaRemover = lista->inicioLista;
            lista->inicioLista = struturaRemover->proximo;
        }else{
            while(copia != NULL && copia->proximo != NULL && copia ->proximo->valor != valor){
                copia = copia->proximo;
                }
            if(copia != NULL && copia->proximo != NULL){
                struturaRemover = copia->proximo;
                copia->proximo = struturaRemover->proximo;
                }
            }
        }

    if(struturaRemover){
        free(struturaRemover);
        lista->tamanhoLista--;
        }
}
int ultimoElemento(CabecaDaLista *lista){
    Lista *novo = lista->inicioLista;
    if(novo != NULL){
        while(novo->proximo!= NULL){
         novo = novo->proximo;
        }
    }else{
            return NULL;
        }

    return novo->valor;
}


int main(){
    setlocale(LC_ALL, "Portuguese");

    CabecaDaLista lista;

     lista.inicioLista = NULL;
     lista.tamanhoLista = 0;

    int valor = NULL;
    int opcao = NULL;
    int exibicao = 0;
    int vazio = 0;

   do{
    system("cls");
    if(exibicao == 1){
        printf("\nConteúdo da Lista: \n");
        exibir(&lista);
        printf("\n\n");
    }

    if(vazio == 1){
        printf("\n\n ATENÇÃO: Lista Vazia \n\n");
    }

    if(opcao == 5){
        printf("\n\n OPÇÃO INVÁLIDA \n\n");
    }
    exibicao = 0;
    vazio = 0;
    printf("Escolha uma das opções:\n"
            " 1 - Adicionar no início da lista\n"
            " 2 - Adicionar no fim da lista \n"
            " 3 - Remover um valor da lista \n"
            " 4 - Exibir  \n"
            " 0 - Sair \n"
            "Escolha opção: ");

    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Insira o valor: ");
        scanf("%d", &valor);
        inserirInicio(&lista, valor);
    }
    else if(opcao == 2){
        printf("Insira o valor: ");
        scanf("%d", &valor);
        inserirFim(&lista, valor);
    }
    else if(opcao == 3){
        printf("Insira o valor: ");
        scanf("%d", &valor);
        if(valor != NULL){
            remover(&lista, valor);
        }else{
            vazio = 1;
        }
    }
    else if(opcao == 4){
        exibicao = 1;
    }
    else if(opcao ==0){
        printf("Fechar Programa");
    }else{
        opcao = 5;
    }

    }while(opcao !=0);
}
