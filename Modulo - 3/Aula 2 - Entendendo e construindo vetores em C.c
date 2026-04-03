// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Declaração de um vetor
    int idades[4];
    int cont;
    
    for (cont = 0; cont <= 4; cont++){
        printf("informe a idade da pessoa %d: ", cont + 1);
        scanf("%d", &idades[cont]);
    }
    
    for (cont = 0; cont <= 4; cont++){
        printf("Pessoa %d: Idade: %d\n", cont + 1, idades[cont]);
    }

    return 0;
}