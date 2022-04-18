#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[50];
    int matricula;
    int idade;
    char cidade[50];
    char sexo;
}Aluno;

int main(){
    Aluno a1;
    printf("Digite o nome:");
    gets(a1.nome);

}
