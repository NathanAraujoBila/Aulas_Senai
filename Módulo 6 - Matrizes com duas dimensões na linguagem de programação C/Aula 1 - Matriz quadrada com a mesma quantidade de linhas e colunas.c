#include <stdio.h>

int main(){
    // criando a matriz
    int matriz[3][3] = { {1, 2, 3},  {4, 5, 6}, {7, 8, 9} };

    //contadores das linhas e das colunas
    int i; //contador para linhas
    int j; //contador para colunas

    //impressão da matriz 3x3 (3 linhas e 3 colunas)
    for( i = 0; i < 3; i ++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}