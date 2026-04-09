#include <stdio.h>

int main() {
    //criando a matriz e variáveis
    int i, j;
    int matriz[3][2];
    
    //pedir ao usuário para preencher os dados da matriz
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //impressão da nossa matriz
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}