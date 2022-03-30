#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Exercício Resolvido 1 - Função Necessária

int contar_caracter(char vetorCaracter[], char caracterDesejado){
    printf("Executou função");
    int i, contador = 0;
    for(i; vetorCaracter[i] != '\0'; i++){
            printf("Entrou For");
        if(vetorCaracter[i] == caracterDesejado){
            contador++;
    printf("Entrou If");
        }
    }
    printf("Teste");
    return contador;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    char caracter;
    printf("Insira um char: ");
    caracter = getchar(); // ou scanf("%c", &caracter);

    printf("Valor digitado: ");
    putchar(caracter); // ou printf("%c", caracter)
    */

    /*******************************************************************************************************************/

    /** EXEMPLO 01: Verificando se o caracter é um digito ou não **/

    /*
    char c;
    printf("Digite uma letra ou numero: ");
    c = getchar();
    if(c >= '0' && c <= '9'){
        printf("É um digito");
    }else{
        printf("Não é um digito");
    }
    */

    /*******************************************************************************************************************/

    /** EXEMPLO 02: Transformando uma letra maiúscula para mninúscula: **/

    /*
    char caracter;
    printf("Insira um caracter minúsculo: ");
    caracter = getchar();

    if(caracter >= 'a' && caracter <= 'z'){
        printf("Conversão para maiúscula: ");
        putchar(caracter - 'a' + 'A');
    }else{
        printf("Valor digitado inválido");
    }
    */

    /*
    char caracter;
    printf("Insira um caracter maiúsculo: ");
    caracter = getchar();

    if(caracter >= 'A' && caracter <= 'Z'){
        printf("Conversão para minúscula: ");
        putchar(caracter + 'a' - 'A');
    }else{
        printf("Valor digitado inválido");
    }
    */

    /*******************************************************************************************************************/

    /** EXEMPLO 03: Strings Entrada e saída. Utilizando Scanf pra ler string: **/

    /*
    char nome[20];
    printf("Digite uma string: ");
    scanf("%19s", nome); // O scanf para a leitura quando encontra um espaço em branco ou tab,
                         // Outro ponto precisamos informar que ele obrigatoriamente irá ler todas as colunas
                         //logo colocamos na atribuição do tipo "%19s" o "19" número de casas que será lido para
                         // não pegar lixo de memória
                         // Lembrando que a última posição do vetor é preenchida com o \0 expresa nulo

    printf("String digitada: %s", nome);
    */

    /*******************************************************************************************************************/

    /** EXEMPLO 04: Método alternativo e mais eficiente de capturar e exibir string **/

    /*
    char texto[30];
    printf("Digite um texto: ");
    fgets(texto, 30,  stdin); // O comando fgets funciona como o scanf porém ele não sofre a limitação de para a leitura
                              // quando encontra espaço ou um tab
    printf("String Digita: ");
    puts(texto); // Funciona como o printf
    */

    /*******************************************************************************************************************/

    /** Exercício 01 : Um programa que imprime  caracter por caracter de uma string **/

    /*
    char texto[20];
    printf("Insira um Texto: ");
    fgets(texto,20,stdin);

    for(int i = 0; texto[i] != '\0'; i++){
        printf("%c\n", texto[i]);
    }
    */

    /*******************************************************************************************************************/

    /** Exercício 02 : Um programa que conta o número de caracteres de uma string **/

    /*
    char texto[20];
    int contador = 0;
    printf("Insira um Texto: ");
    fgets(texto,20,stdin);

    for(int i = 0; texto[i] != '\0'; i++){
        contador++;
    }
    printf("Foram preenchidos : %d posições", contador);
    */

    /** Exercício 03 : Copiando uma string fornecida pelo usuário para outra **/


    /*
    char texto_origem[20];
    char texto_destino[20];
    int contador = 0;
    int i = 0;
    printf("Insira um Texto: ");
    fgets(texto_origem,20,stdin);

    for(i = 0; texto_origem[i] != '\0'; i++){
        texto_destino[i] = texto_origem[i];
    }
    texto_destino[i] = '\0';
    printf("String destino: %s ", texto_destino);
    */

    char texto[30], encontre;
    int numeroOcorrencia = 0;

    printf("Informe uma String: ");
    fgets(texto,30,stdin);
    printf("Informe o caracter que deseja contar as ocorrências: ");
    scanf("%c", encontre);
    printf("Passou parametro");
    numeroOcorrencia = contar_caracter(texto, encontre);
    printf("O  caracter %c aparece %d vezes", encontre, numeroOcorrencia);

}
