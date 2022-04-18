#include <stdio.h>
#include <stdlib.h>

//Exemplo de Estrutura aninhada

typedef struct {
int dia, mes, ano;
} Data;

typedef struct {
    char nome[150], cpf[12];
    Data nascimento; //Strutura
}Responsavel;

typedef struct {
    char nome[150];
    Data nascimento;
    Responsavel mae,pai;
} Aluno;

int main()
{
    Aluno a1;

    printf("Preencha os dados do aluno:\n");
    printf("Nome: ");
    gets(a1.nome);
    printf("Data Nascimento: dia / mes/ ano: \n");
    scanf("%d %d %d", &a1.nascimento.dia,&a1.nascimento.mes,&a1.nascimento.ano);

    printf("Nome do pai: ");
    gets(a1.pai.nome);
    printf("Cpf do pai: ");
    gets(a1.pai.cpf);
    printf("Data Nascimento: dia / mes / ano: \n");
    scanf("%d %d %d", &a1.pai.nascimento.dia, &a1.pai.nascimento.mes, &a1.pai.nascimento.ano);

    printf("Nome do mae: ");
    gets(a1.mae.nome);
    printf("Cpf do pai: ");
    gets(a1.mae.cpf);
    printf("Data Nascimento: dia / mes / ano: \n");
    scanf("%d %d %d", &a1.mae.nascimento.dia, &a1.mae.nascimento.mes, &a1.mae.nascimento.ano);
}
