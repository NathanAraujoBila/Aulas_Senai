#include <stdio.h>

int fatorial(int n) {
    if (n == 0){
        return 1;
    } else {
        // chamada recursiva
        return (n * fatorial(n - 1));
    }
}

int main() {
    int result = 0;
    
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
    
    if (num < 0){
        printf("O fatorial não está definido para números negativos!\n");
    } else {
        result = fatorial(num);
        printf("O fatorial de %d é %d", num, result);
    }
    
}