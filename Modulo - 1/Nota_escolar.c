#include <stdio.h>

int main() {
 
    int nota = 7;
    int recuperacao = 0;
    
    //verificando a notado aluno
    if ((nota >= 5) && (nota <7 )){
        printf("Você está em recuperação!");
    } else if (nota >= 7) {
       printf("Você passou! Muito bem!"); 
    } else {
        printf("Você infelizmente não passou!");
    }
    
    return 0;
}