#include <stdio.h>
#include <string.h>

//definindo a struct Pessoa
struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // criar uma variável com a estrutura da struct
    struct Pessoa clienteA;
    float salario;
    
    //inserir os dados do nosso 1° cliente
    strcpy(clienteA.nome, "Nathan");
    clienteA.idade = 17;
    clienteA.altura = 1.70;
    salario = 100.00;
    
    //mostrando os dados na tela
    printf("Nome: %s\n", clienteA.nome);
    printf("Idade: %d\n", clienteA.idade);
    printf("Altura: %0.2f\n", clienteA.altura);
    printf("Salario: %0.2f\n", salario);

    return 0;
}