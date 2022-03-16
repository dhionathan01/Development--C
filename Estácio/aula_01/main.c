#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Portuguese_Brasil");
  int contador;
  char vetor[20];
  char valor;

  for(contador = 0; contador < 20; contador++){
    printf("digite um valor da posição: ");
    scanf("%s", &valor );
    if(valor == '0'){
      printf("%s", vetor);
      break;
    }
    vetor[contador] = valor;
  }

  return 0;
}
