#include <stdio.h>

int main() {
    int num;
    int cont;
    int result = 0;
    
    printf("Qual tabuada você quer aprender? \n");
    scanf("%d", &num);
    
    for (cont = 0; cont <= 10; cont++){
        result = cont * num;
        printf("%d * %d = %d \n", num, cont, result);
    }
  
    return 0;
}