#include <stdio.h>
#include <stdlib.h>
#define NUM  30
 
typedef struct aluno {
    int numero;
    float nota;
} Aluno;
 
char *getGabarito(char *gabarito);
Aluno **getNotaAluno(char *gabarito, int numeroAlunos);
 
int main(void) {
 
    char *gabarito = (char *)malloc(NUM*sizeof(char));
    gabarito = getGabarito(gabarito);
    int numeroAlunos = 0;
    printf("Digite o numero de alunos: ");
    scanf("%d", &numeroAlunos);
    Aluno **alunos = getNotaAluno(gabarito, numeroAlunos);
    int i = 0;
    for(i=0;i<numeroAlunos;i++) {
        Aluno *a = *(alunos+i);
        printf("Numero: %d\nNota: %.2f\n\n", a->numero, a->nota);
    }
    free(alunos);
    return 0;
}
 
Aluno **getNotaAluno(char *gabarito, int numeroAlunos) {
    Aluno **alunos =  (Aluno **)malloc(sizeof(Aluno));
    int i = 0;
    for(i=0;i<numeroAlunos;i++) {
        Aluno *a =  (Aluno *)malloc(sizeof(Aluno));
        printf("Informe o numero do aluno: ");
        scanf("%d", &a->numero);
        int j = 0;
        char *respostas = (char *)malloc(NUM*sizeof(char));
        for(j=0;j<NUM;j++) {
            printf("Informe a letra da %da questao: ", j+1);
            scanf("%s", (respostas+j));        
        }
        int cont = 0;
        for(j=0;j<NUM;j++) {
                if(*(gabarito+j)==*(respostas+j)) {
                    cont++;
                }
        }
        float nota = (10*cont)/NUM;
        a->nota = nota;
        *(alunos+i) = a;
    }
    return alunos;
}
 
 
char *getGabarito(char *gabarito) {
    int i = 0;
    for(i=0;i<NUM;i++) {
        printf("Informe a letra da %da questao: ", i+1);
        scanf("%s", (gabarito+i));
    }
    return gabarito;
}
