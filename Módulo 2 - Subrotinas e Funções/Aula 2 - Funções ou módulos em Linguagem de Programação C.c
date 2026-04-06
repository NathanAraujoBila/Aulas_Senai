#include <stdio.h>

//criar função somar
int somar(int a, int b){
    //corpo da função
    int result = a + b;
    return result;
}

int main() {
    int x = 10;
    int y = 25;
    
    int resultSoma = somar(x, y);
    
    printf("O resutado da soma é %d", resultSoma);

    return 0;
}