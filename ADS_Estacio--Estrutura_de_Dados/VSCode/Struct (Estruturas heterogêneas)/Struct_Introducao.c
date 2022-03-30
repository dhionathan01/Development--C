#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Exemplo de Estrutura:
typedef struct
{
    char nome[100];
    int matricula;
    int idade;
    char cidade[50];
    char sexo;
} Aluno;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Aluno a1;
    strcpy(a1.nome, "Dhionathan L Jobim");
    a1.idade = 20;
    strcpy(a1.cidade,  "Rio Novo");
    a1.matricula = 202001237331;
    a1.sexo = 'M';

    printf("Dados do Aluno1: \n");

    printf("Nome: ");
    puts(a1.nome);

    printf("Cidade: ");
    puts(a1.cidade);

    printf("Matricula: %d", a1.matricula);

    return 0;
}
