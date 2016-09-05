#include <stdio.h>
#include <stdlib.h>

typedef struct informacoes {
    char nome[255];
    int idade;
    int batimentosRelaxado;
    int batimentosExercicio;
} Informacoes;

float calculaMediaBatimentosCardiacos(Informacoes *i);
float calculaCondicionamentoAerobico(Informacoes *i, float fator);

int main(void) {

Informacoes *info = (Informacoes *)malloc(sizeof(Informacoes));

printf("Informe o nome da pessoa: ");
scanf("%s", info->nome);
printf("Informe a idade: ");
scanf("%d", &info->idade);
printf("Informe o numero de batimentos relaxado: ");
scanf("%d", &info->batimentosRelaxado);
printf("Informe o numero de batimentos apos o exercicio: ");
scanf("%d", &info->batimentosExercicio);
printf("Seu condicionamento aerobico e %.2f\n", calculaCondicionamentoAerobico(info, calculaMediaBatimentosCardiacos(info)));

free(info);
return 0;
}

float calculaMediaBatimentosCardiacos(Informacoes *i) {
    return ((i->batimentosRelaxado*3 + i->batimentosExercicio*5)/10);
}

float calculaCondicionamentoAerobico(Informacoes *i, float media) {
    int fator = 0;
    if(media <= 70) {
        fator = 3;
    }
    else if(media > 70 && media <= 100) {
        fator = 2;
    }
    else {
        fator = 1;
    }
    return i->idade*fator;
}
