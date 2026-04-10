#include <stdio.h>

void exibirGastos ( float gastos[], int dias){
    printf("\nGastos Diários:\n");
    for (int i = 0; i < dias; i++){
        printf("Dia %d: R$ %0.2f\n", i+1, gastos[i]);
    }
}

int main() {
    float gastosDiarios[7];
    int dias = 7;
    
    printf("Registre seus gastos diários da semana: \n");
    
    //loop para entrada de dados
    for (int i = 0; i < dias; i++){
        printf("Gastos do dia %d: R$ ", i+1);
        scanf("%f", &gastosDiarios[i]);
    }
    
    //exibição dos gastos diários
    exibirGastos(gastosDiarios, dias);

    return 0;
}