#include <stdio.h>

int main() {
    //criando as variáveis
    int nota1 = 4;
    int nota2 = 7;
    float media = 0;
    
    
    //calcular a média
    media= ((nota1 + nota2) / 2);
    
    //mostrar a média calcuada na tela
    printf("Suas notas são: %d e %d.", nota1, nota2);
    printf("\nSua média é %0.2f", media);
    
    return 0;
}