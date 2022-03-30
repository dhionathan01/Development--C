#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Exerc�cio Resolvido 1 - Fun��o Necess�ria

int contar_caracter(char vetorCaracter[], char caracterDesejado){
    printf("Executou fun��o");
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

    /** EXEMPLO 01: Verificando se o caracter � um digito ou n�o **/

    /*
    char c;
    printf("Digite uma letra ou numero: ");
    c = getchar();
    if(c >= '0' && c <= '9'){
        printf("� um digito");
    }else{
        printf("N�o � um digito");
    }
    */

    /*******************************************************************************************************************/

    /** EXEMPLO 02: Transformando uma letra mai�scula para mnin�scula: **/

    /*
    char caracter;
    printf("Insira um caracter min�sculo: ");
    caracter = getchar();

    if(caracter >= 'a' && caracter <= 'z'){
        printf("Convers�o para mai�scula: ");
        putchar(caracter - 'a' + 'A');
    }else{
        printf("Valor digitado inv�lido");
    }
    */

    /*
    char caracter;
    printf("Insira um caracter mai�sculo: ");
    caracter = getchar();

    if(caracter >= 'A' && caracter <= 'Z'){
        printf("Convers�o para min�scula: ");
        putchar(caracter + 'a' - 'A');
    }else{
        printf("Valor digitado inv�lido");
    }
    */

    /*******************************************************************************************************************/

    /** EXEMPLO 03: Strings Entrada e sa�da. Utilizando Scanf pra ler string: **/

    /*
    char nome[20];
    printf("Digite uma string: ");
    scanf("%19s", nome); // O scanf para a leitura quando encontra um espa�o em branco ou tab,
                         // Outro ponto precisamos informar que ele obrigatoriamente ir� ler todas as colunas
                         //logo colocamos na atribui��o do tipo "%19s" o "19" n�mero de casas que ser� lido para
                         // n�o pegar lixo de mem�ria
                         // Lembrando que a �ltima posi��o do vetor � preenchida com o \0 expresa nulo

    printf("String digitada: %s", nome);
    */

    /*******************************************************************************************************************/

    /** EXEMPLO 04: M�todo alternativo e mais eficiente de capturar e exibir string **/

    /*
    char texto[30];
    printf("Digite um texto: ");
    fgets(texto, 30,  stdin); // O comando fgets funciona como o scanf por�m ele n�o sofre a limita��o de para a leitura
                              // quando encontra espa�o ou um tab
    printf("String Digita: ");
    puts(texto); // Funciona como o printf
    */

    /*******************************************************************************************************************/

    /** Exerc�cio 01 : Um programa que imprime  caracter por caracter de uma string **/

    /*
    char texto[20];
    printf("Insira um Texto: ");
    fgets(texto,20,stdin);

    for(int i = 0; texto[i] != '\0'; i++){
        printf("%c\n", texto[i]);
    }
    */

    /*******************************************************************************************************************/

    /** Exerc�cio 02 : Um programa que conta o n�mero de caracteres de uma string **/

    /*
    char texto[20];
    int contador = 0;
    printf("Insira um Texto: ");
    fgets(texto,20,stdin);

    for(int i = 0; texto[i] != '\0'; i++){
        contador++;
    }
    printf("Foram preenchidos : %d posi��es", contador);
    */

    /** Exerc�cio 03 : Copiando uma string fornecida pelo usu�rio para outra **/


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
    printf("Informe o caracter que deseja contar as ocorr�ncias: ");
    scanf("%c", encontre);
    printf("Passou parametro");
    numeroOcorrencia = contar_caracter(texto, encontre);
    printf("O  caracter %c aparece %d vezes", encontre, numeroOcorrencia);

}
