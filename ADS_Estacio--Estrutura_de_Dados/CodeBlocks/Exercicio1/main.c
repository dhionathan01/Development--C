#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int contar_caracter(char vetorCaracter[], char caracterDesejado){
    setlocale(LC_ALL, "Portuguese");
    int i, contador = 0;
    for(i; vetorCaracter[i] != '\0'; i++){
        if(vetorCaracter[i] == caracterDesejado){
            contador++;
        }
    }
    return contador;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char texto[30], encontre;
    int numeroOcorrencia = 0;

    printf("Informe uma String: ");
    fgets(texto,30,stdin);
    printf("Informe o caracter que deseja contar as ocorrências: ");
    scanf("%c", &encontre);
    numeroOcorrencia = contar_caracter(texto, encontre);
    printf("O  caracter \"%c\" aparece %d vezes", encontre, numeroOcorrencia);

}
