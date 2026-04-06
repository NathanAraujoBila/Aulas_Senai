#include <stdio.h>

int main() {
    // criar o vetor para armazenar a temp
    float temp[7];
    int cont;
    
    float somaTemp = 0;
    float mediaTemp = 0;
    
    //obter as temperaturas diárias
    for (cont = 1; cont <= 7; cont++){
        printf("Temperatura do %d dia: ", cont);
        scanf("%f", &temp[cont]);
        
        //armazenar a soma das temperaturas
        somaTemp = somaTemp + temp[cont];
    }

    //media da semana
    mediaTemp = (somaTemp / 7);
    
    //impressão da média da temperatura
    printf("A média de temperatura da semana foi %0.2f", mediaTemp);
    
    return 0;
}