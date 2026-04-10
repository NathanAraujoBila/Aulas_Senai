#include <stdio.h>

void exibirRelatorio ( float vendas[], int numTipos){
    printf("\nRelatório Geral de Vendas\n");
    for (int i = 0; i < numTipos; i++){
        printf("Dia %d: Qtde litros vendidas: %0.2f\n", i+1, vendas[i]);
    }
}

int main() {
    float vendaCombustivel[3];
    int numTipo = 3;
    
    printf("Registro de vendas no Posto Krika: \n");
    
    //loop para entrada de dados - registro vendas
    for (int i = 0; i < numTipo; i++){
        printf("Quantidade de litros vendida do combustivel %d: ", i+1);
        scanf("%f", &vendaCombustivel[i]);
    }
    
    //exibição do relatório de vendas
    exibirRelatorio(vendaCombustivel, numTipo);

    return 0;
}