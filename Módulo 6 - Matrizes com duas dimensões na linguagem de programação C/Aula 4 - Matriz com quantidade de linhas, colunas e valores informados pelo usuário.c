#include <stdio.h>

int main() {
    //variáveis
    int linhas, colunas, i, j;
    
    //pedir os dados da estrutura da matriz ao usuário
    printf("Informe o número de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Informe onúmero de colunas da matriz: ");
    scanf("%d", &colunas);
    
    //criar a matriz
    int matriz[linhas][colunas];
    
    //informar os dados da matriz
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("Digite o elemento da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    //impressão da matriz
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}