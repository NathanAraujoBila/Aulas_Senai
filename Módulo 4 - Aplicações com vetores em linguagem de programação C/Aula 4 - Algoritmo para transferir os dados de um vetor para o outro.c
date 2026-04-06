#include <stdio.h>

int main() {
    // criar variáveis e constante
    const int n = 3;
    int vetA[n], vetB[n];
    int i;
    
    //vamos alimentar o nosso vetor A
    for (i = 0; i < n; i ++){
        printf("Informe o %d número de %d: ", (i+1), n);
        scanf("%d", &vetA[i]);
    }
    
    //transferencia de dados do Vetor A para o Vetor B
    for (i = 0; i < n; i++){
        vetB[i] = vetA[i];
    }
    
    //impressão dos dados do vetor
    for (i = 0; i < n; i++){
        printf("Posição: %d - Vetor A[%d] - Vetor B[%d]\n", i+1, vetA[i], vetB[i]);
    }
    
    
    return 0;
}