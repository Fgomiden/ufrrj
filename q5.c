#include <stdio.h>
#include <stdlib.h>
 
typedef struct motorista { 
    int anoNascimento; // usar como idade
    int sexo;
    int procedencia;
} Motorista;
 
 
int pegaNumeroMotoristas(Motorista **motoristas, int numeroMotoristas) {
    int h = 0;
    int contador = 0;
    for(h = 0;h < numeroMotoristas;h++) {
        Motorista *aux = (Motorista *)malloc(sizeof(Motorista));
        aux = *(motoristas+h);
        if(aux->anoNascimento < 21) {
            contador++;
        }
    }
    return contador;
}
 
 
int mulheresCapital(Motorista **motoristas, int numeroMulheres) {
    int h = 0;
    int contador = 0;
    for(h = 0;h < numeroMulheres;h++) {
        Motorista *aux = (Motorista *)malloc(sizeof(Motorista));
        aux = *(motoristas+h);
        if(aux->sexo == 1 && aux->procedencia == 0) {
            contador++;
        }
    }
    return contador;
}
 
int idadeMaior(Motorista **motoristas, int numeroMotoristasMaioresQue) {
    int h = 0;
    int contador = 0;
    for(h = 0;h < numeroMotoristasMaioresQue;h++) {
        Motorista *aux = (Motorista *)malloc(sizeof(Motorista));
        aux = *(motoristas+h);
        if(aux->anoNascimento > 60 && aux->procedencia == 1) {
            contador++;
        }
    }
    return contador;
}
 
int idosa(Motorista **motoristas, int mulherIdosa) {
    int h = 0;
    int contador = 0;
    for(h = 0;h < mulherIdosa;h++) {
        Motorista *aux = (Motorista *)malloc(sizeof(Motorista));
        aux = *(motoristas+h);
        if(aux->anoNascimento > 60 ) {
            contador++;
        }
    }
    return contador;
}
 
 
 
 
int main(void) {
    Motorista **m = (Motorista **)malloc(sizeof(Motorista));
    int n = 0;
    printf("Informe o numero de infracoes: ");
    scanf("%d", &n);
    int i = 0;
   
    for(i = 0;i < n;i++) {
        Motorista *aux = (Motorista *)malloc(sizeof(Motorista));
        printf("Informe o ano de nascimento: ");
        scanf("%d", &aux->anoNascimento);
        printf("Informe o sexo (1 = feminino, 2 = masculino) ");
        scanf("%d", &aux->sexo);
        printf("Informe a procedencia: ");
        scanf("%d", &aux->procedencia);
        *(m+i) = aux;
    }
   
    int numeroMenores21 = pegaNumeroMotoristas(m, n);
    int mulheresNaCapital = mulheresCapital(m, n);
    int maiorIdade = idadeMaior(m, n);
    int idosas = idosa(m,n);
   
    printf("%d\n %d\n %d\n %d", numeroMenores21, mulheresNaCapital, maiorIdade, idosas);
   
    return 0;
}
