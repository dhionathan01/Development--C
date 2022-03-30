#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Portuguese" );
  int contador;
  int vetor[10];
  for(contador = 0; contador < 10; contador++){
    printf("digite um valor da posição %d : ", contador);
    scanf("%d", &vetor[contador] );
  }
  for(contador = 0; contador < 10; contador++){
    printf("%d", vetor[contador]);
  }


  return 0;
}
