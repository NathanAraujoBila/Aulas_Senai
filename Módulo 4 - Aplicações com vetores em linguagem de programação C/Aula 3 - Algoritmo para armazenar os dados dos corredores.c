#include <stdio.h>

int main() {
    // criar variáveis e vetor
    int cont;
    int idade[3] = {13, 15, 18};
    
    //impressão dos dados
    for (cont = 0; cont < 3; cont++){
        printf("Idade da pessoa %d: %d\n", cont+1, idade[cont]);
    }
    
    return 0;
}