#include <stdio.h>

//estrutura para guardar os dados do paciente
struct Paciente {
    char nome[50];
    int idade;
    char procedimento[50];
    float valorProcedimento;
};

//função que vai exibir o relatório
void exibirRelatorio(struct Paciente pacientes[], int numPaciente){
    printf("\n *** Relatório de Pacientes e Procedimentos da Clínica *** \n");
    
    //impressão dos dados
    for (int i = 0; i < numPaciente; i++){
        printf("Paciente %d", i+1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Procedimento: %s\n", pacientes[i].procedimento);
        printf("Valor Procedimento: %0.2f\n", pacientes[i].valorProcedimento);
        printf("----------------------------------------------------------\n");
    }
}

int main() {
    struct Paciente pacientes[3];
    int numPacientes = 0;
    char escolha;
    
    printf("Registro de Pacientes da Clinica Salvador\n");
    
    //loop de entrada de dados dos registros dos pacientes
    while(numPacientes < 5){
        printf("Nome do paciente: ");
        scanf("%s", &pacientes[numPacientes].nome);
        
        printf("idade do paciente: ");
        scanf("%d", &pacientes[numPacientes].idade);
        
        printf("Informe o procedimento: ");
        scanf("%s", &pacientes[numPacientes].procedimento);
        
        printf("Informe o valor do procedimento: ");
        scanf("%f", &pacientes[numPacientes].valorProcedimento);
    
        numPacientes++;
        
        printf("Deseja cadastrar mais um paciente? (s/n): ");
        scanf(" %c", &escolha);
        
        if(escolha != 's' && escolha != 'S'){
            printf("Cadastro Finalizado com sucesso.");
            break;
        }
    }
    
    //exibir o relatório
    exibirRelatorio(pacientes, numPacientes);
    
    return 0;
}