#include <stdio.h>

int main() {
    //criando a matriz 3x2 (3 linhas e 2 colunas)
    int matriz[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    int i, j;
    
    //impressão da nossa matriz
    for (i = 0; i < 3; i++){
        //trabalhando com a coluna da matriz
        for (j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        //quebrar linha quando imprimir as 2 colunas
        printf("\n");
    }

    return 0;
}