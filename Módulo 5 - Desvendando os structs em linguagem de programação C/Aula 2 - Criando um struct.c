#include <stdio.h>
#include <string.h>

//criar a estrutura
struct Aluno{
    char nome[50];
    int idade;
    float media;
};

int main() {
    // variável do tipo que criamos a struct
    //é um vetor que guarda os dados de 3 alunos!
    struct Aluno alunos[3];
    int i;
    
    //inserir os dados no vetor de alunos
    for (i = 0; i < 3; i++){
        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", &alunos[i].nome);
        
        printf("Informe a idade do aluno %d: ", i+1);
        scanf("%d", &alunos[i].idade);
        
        printf("Informe a média do aluno %d: ", i+1);
        scanf("%f", &alunos[i].media);
    }
    
    //impressão dos dados dos alunos
    for (i = 0; i < 3; i++){
        printf("Aluno %d:\n ", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n ", alunos[i].idade);
        printf("Média: %0.2f\n ", alunos[i].media);
        printf("\n");
    }
    return 0;
}