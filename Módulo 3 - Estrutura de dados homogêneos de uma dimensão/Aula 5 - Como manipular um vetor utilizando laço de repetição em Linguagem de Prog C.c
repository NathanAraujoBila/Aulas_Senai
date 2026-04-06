#include <stdio.h>

int main() {
    int cont;
    float media = 0;
    int somaNota = 0;
    int maior = 0;
    int menor = 0;
    
    //criar vetor
    int notaAluno[5];
    
    //obter dados do teclado
    for (cont = 1; cont <= 5; cont++){
        printf("Informe a nota do %d aluno: ", cont);
        scanf("%d", &notaAluno[cont]);
        
        //armazenar as notas para calcular a media mais tarde....
        somaNota = somaNota + notaAluno[cont];
        
        //verificar a nota do aluno, se maior ou menor que 7
        if (notaAluno[cont] > 7){
            maior = maior + 1;
        }else if (notaAluno[cont] < 7){
            menor = menor + 1;
        }
    }
    
    printf("\n Agora vamos mostrar as notas que estão no vetor\n");
    
    //mostrar dados obtidos do teclado na tela
    for (cont = 1; cont <= 5; cont++){
        printf("Nota do aluno %d: %d\n", cont, notaAluno[cont]);
    }
    
    //calcular a média da turma
    media = somaNota / (cont-1);
    
    printf("\n\nA média da turma é: %0.2f \n", media);
    printf("Quantidae alunos com nota maior que 7: %d\n", maior);
    printf("Quantidae alunos com nota menor que 7: %d\n", menor);
    
    return 0;
}