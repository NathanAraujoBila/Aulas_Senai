#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
};

// adicionar itens ao carrinho
void adicionarAoCarrinho(struct Produto carrinho[], int *numProdutos, struct Produto novoProduto){
    if(*numProdutos < 10){
        carrinho[*numProdutos] = novoProduto;
        (*numProdutos)++;
    } else {
        printf("Carrinho cheio. Não é possível adicionar mais itens!\n");
    }
}

// calcular valor total
float calcularTotal(struct Produto carrinho[], int numProdutos){
    float total = 0;
    for (int i = 0; i < numProdutos; i++){
        total += carrinho[i].preco;
    }
    return total;
}

int main() {
    struct Produto produtosDisponiveis[3] = {
        {"Camiseta Branca", 29.90},
        {"Calça Jeans", 199.99},
        {"Tênis", 99.99}
    };

    struct Produto carrinho[10];
    int numProdutosCarrinho = 0;

    printf("Produtos Disponíveis:\n");
    for(int i = 0; i < 3; i++){
        printf("%d. %s - R$ %.2f\n", i+1, produtosDisponiveis[i].nome, produtosDisponiveis[i].preco);
    }

    while(1){
        int escolha;

        printf("Escolha um produto para adicionar no carrinho (0 para sair): ");
        scanf("%d", &escolha);

        if (escolha == 0){
            break;
        } else if (escolha >= 1 && escolha <= 3){
            adicionarAoCarrinho(carrinho, &numProdutosCarrinho, produtosDisponiveis[escolha - 1]);
            printf("Produto adicionado ao carrinho.\n");
        } else {
            printf("Opção inválida!\n");
        }
    }

    float totalCompra = calcularTotal(carrinho, numProdutosCarrinho);
    printf("Total da Compra: R$ %.2f\n", totalCompra);

    return 0;
}