#include <stdio.h>
#include <string.h>

int main() {
    char senha[] = "amarelo";
    char senhaCorreta[] = "amarelo";
    int idade = 18;
    
    //verificar senha
    if (strcmp(senha, senhaCorreta) == 0) {
        printf("Acesso permitido");
        
        //Vou perguntar a idade para validar a entrada
        if (idade >=18){
            printf("\nPode entrar! Seja bem-vindo(a)!");
        }else{
            printf("\nInfelizmente você não tem a idade permitida!");
        }
        
    } else {
        printf("Acesso Negado");
    }
    
    return 0;
}