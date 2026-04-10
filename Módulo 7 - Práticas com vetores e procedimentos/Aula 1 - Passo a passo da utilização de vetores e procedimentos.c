#include <stdio.h>

//criando a função para exibir os itens
void exibirLista( char itens[][50], int totalItens){
    printf("Lista de Compras:\n");
    
    for (int i = 0; i < totalItens; i++){
        printf("%d, %s\n", i+1, itens[i]);
    }
}

int main() {
    // criando variáveis
    // vetor que armazena os itens de compra
    char itensCompra[10][50];
    int totalItens = 0;
    char escolha;
    
    printf("Informe os itens da sua lista (Até 10 itens):\n");
    
    //loop -
    while (totalItens < 10){
        printf("Item %d: ", totalItens + 1);
        scanf("%s", itensCompra[totalItens]);
        
        //incremento da variável
        totalItens++;
        
        printf("Adicionar outro item? (s/n): ");
        scanf(" %c", &escolha);
        
        //validando a escolha do usuário
        if ((escolha != 's') && (escolha != 'S' )){
            break;
        }
    }
    
    //exibir os itens que inserimos no vetor
    exibirLista(itensCompra, totalItens);
    return 0;
}