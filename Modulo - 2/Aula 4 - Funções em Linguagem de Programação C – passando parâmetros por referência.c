#include <stdio.h>

void alteraValor(int *x){
    //modificar o valor da variável
    //através do ponteiro
    *x = 10;
}

int main() {
    int valor = 5;
    printf("Variável antes de chamar a função: %d\n", valor);
    
    //chamar a função
    alteraValor(&valor);
    
    printf("Variável DEPOIS de chamar a função: %d\n", valor);
    
    return 0;
}