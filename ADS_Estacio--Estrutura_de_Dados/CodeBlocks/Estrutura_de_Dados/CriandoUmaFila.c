#include <stdio.h>

void enfileirar(int valor, int filamento[], int *endereco) {
  filamento[*endereco] = valor;
  (*endereco)++;
}

void desifileirar(int filamento[], int *endereco){
  (*endereco)--;
  for (int i = 0; i < *endereco; i++){
    filamento[i] = filamento [i+1];
  }
}

void exibir_fila(int filamento[], int *endereco){
  for(int i = 0; i < *endereco; i++){
    printf("%d", filamento[i]);
    }
}

int main(void) {
  int endereco = 0;
  int fila[10];

  enfileirar(2, fila, &endereco);
  enfileirar(3, fila, &endereco);
  enfileirar(5, fila, &endereco);
  desifileirar(fila, &endereco);
  exibir_fila(fila, &endereco);
  printf("\n");
  desifileirar(fila, &endereco);
  enfileirar(4, fila, &endereco);
  enfileirar(6, fila, &endereco);
  exibir_fila(fila, &endereco);
  printf("\n");
  desifileirar(fila, &endereco);
  exibir_fila(fila, &endereco);

  return 0;
}
