#include <stdio.h>
#include <stdlib.h>

typedef struct hora {
    int horaEntrada;
    int horaSaida;
} Hora;

typedef struct cargo {
    char nomeCargo[255];
    int codigoCargo;
} Cargo;

typedef struct empregado {
    char nome[255];
    int inscricao;
    Cargo cargo;
    Hora horasSemanais[5];
} Empregado;

int getTempoTrabalhadoSemanaPessoa(Empregado *empregado);
float calculaSalario(Empregado *empregado);
float *getSalarioEquipe(void *empregado, int numeroEmpregados);

int main(void) {
    printf("Quantos funcionarios deseja? ");
    int n = 0; scanf("%d", &n);
    Empregado **empregados;
    int i = 0;
    for(i=0;i<n;i++) {
        Empregado *empregado = (Empregado *)malloc(sizeof(Empregado));
        *(empregados+i) = empregado;
    }
    float *salario = getSalarioEquipe(empregados, n);
    i = 0;
    for(i=0;i<n;i++) {
        printf("%do. salario: %.2f.\n", i+1, *(salario+i));
    }

    return 0;
}

float *getSalarioEquipe(void *empregado, int numeroEmpregados) {
    float *salarios = (float *)malloc(numeroEmpregados*sizeof(float));
    int i = 0;
    if (numeroEmpregados==1) {
        // se for uma pessoa só, cria só um ponteiro normal pra Empregado
        Empregado *pessoa = ((Empregado *)empregado);
        *(salarios) = calculaSalario(pessoa);
    }
    else {
        // se for mais de uma pessoa, cria um ponteiro de ponteiro para Empregado, ou seja, um vetor
        Empregado **pessoa = ((Empregado **)empregado);
        for(i=0;i<numeroEmpregados;i++) {
            *(salarios+i) = calculaSalario(*(pessoa+i));
        }
    }
    return salarios;
}

int getTempoTrabalhadoSemanaPessoa(Empregado *empregado) {
    printf("Informe o nome: ");
    scanf("%s", empregado->nome);
    printf("Informe o numero da inscricao: ");
    scanf("%d", &empregado->inscricao);
    printf("Informe o nome do cargo: ");
    scanf("%s", empregado->cargo.nomeCargo);
    printf("Informe o codigo do cargo: ");
    scanf("%d", &empregado->cargo.codigoCargo);
    int i = 0;
    int totalHoraSemana = 0;
    for(i=0;i<5;i++) {
        printf("Informe a hora de entrada no %do dia: ", i+1);
        scanf("%d", &empregado->horasSemanais[i].horaEntrada);
        printf("Informe a hora de saida no %do dia: ", i+1);
        scanf("%d", &empregado->horasSemanais[i].horaSaida);
        totalHoraSemana += (empregado->horasSemanais[i].horaSaida - empregado->horasSemanais[i].horaEntrada);
    }
    return totalHoraSemana;
}

float calculaSalario(Empregado *empregado) {
    int totalTrabalhado = getTempoTrabalhadoSemanaPessoa(empregado);
    float salarioHora = 0;
    if (empregado->cargo.codigoCargo == 1) {
        salarioHora = 40;
    }
    else if (empregado->cargo.codigoCargo == 2) {
        salarioHora = 60;
    }
    else if (empregado->cargo.codigoCargo == 3) {
        salarioHora = 100;
    }
    else {
        printf("Codigo de cargo invalido!\n");
        exit(1);
    }
    double salarioFinal = 40*salarioHora;
    if (totalTrabalhado < 40) {
        salarioFinal *= 0.5;
    }
    if (totalTrabalhado > 40) {
        int horasExcedentes = totalTrabalhado - 40;
        float bonificacao = horasExcedentes*(salarioHora/2);
        salarioFinal += bonificacao;
    }
    return salarioFinal;
}
