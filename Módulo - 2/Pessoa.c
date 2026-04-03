#include <stdio.h>

int main() {
    char nome[] = "Nathan";
    int idade = 17;
    float altura = 1.71;
    
    printf("Nome: %s", nome);

    //operador E -> representado por &&
    //operador OU -> representado por ||
    //operador de comparação -> por =
    
    if ((idade >= 18) && (altura >= 1.50)){
        printf("\nPessoa Autorizada!");
    } else{
        printf("\nPessoa NÃO Autorizada");
    }

    return 0;
}