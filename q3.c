#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
   
    float valorTotal;
    int qtdAcessorios;
   
    qtdAcessorios = 0;
 
    mostraModelos(&valorTotal);
   
    while (mostraAcessorios(&qtdAcessorios,&valorTotal)){
       
    }
 
   
//  printf("\nValor sem desconto: %f",valorTotal);
   
    calculaDescontos(&valorTotal,&qtdAcessorios);
   
    printf("\nvalor total a pagar: %f",valorTotal);
   
    printf("\nqtdAcessorios: %d",qtdAcessorios);
   
 
}
 
 
calculaDescontos(float *pValorTotal,int *qtdAcessorios){
   
   
    float valor;
    valor = *pValorTotal;
   
   
    switch (*qtdAcessorios){
       
        case 2:
            *pValorTotal = valor-valor*0.1;
           
            break;
           
        case 3:
            *pValorTotal = valor-valor*0.15;
            break;         
        case 5:
            *pValorTotal = valor-valor*0.2;
            break;
       
    }  
}
 
 
 mostraModelos(float *pValorTotal){
    int modeloSelecionado;
   
    printf("Selecione o modelo:\n\n");
    printf("1 - Dib_Turbo $20.000\n");
    printf("2 - Dib_MV7 $15.000\n");
    printf("3 - Dib_Stander $12.000\n");
           
    scanf("%d",&modeloSelecionado);
       
    switch (modeloSelecionado)
   {
   
        case 1 :
            *pValorTotal = 20000;
            break;
       
        case 2 :
            *pValorTotal = 15000;
            break;
           
        case 3 :
            *pValorTotal = 12000;
            break;
       
        default :
            printf("valor invalido");
              break;   
    }  
   
   
 
}
 
int mostraAcessorios(int *qtdAcessorios, float *valorTotal){
   
    int opcionalSelecionado = 0;
   
   
    printf("Selecione os opcionais:\n\n");
    printf("1 - Ar condicionado $2.000\n");
    printf("2 - Dir. hidraulica $1.500\n");
    printf("3 - Motor 2.0 $1.000\n");
    printf("4 - Vidros eletricos $1.000\n");
    printf("5 - Bancos de couro $1.000\n");
    printf("6 - Sair\n");
   
    scanf("%d",&opcionalSelecionado);
   
    switch (opcionalSelecionado){
       
        case 1:
            *valorTotal += 2000;
            *qtdAcessorios+=1;
            return 1;
            break;
           
        case 2:
            *valorTotal += 1500;
            *qtdAcessorios+=1;
            return 1;
            break;
           
        case 3:
            *valorTotal += 1000;
            *qtdAcessorios+=1;
            return 1;
            break;
           
        case 4:
            *valorTotal += 1000;
            *qtdAcessorios+=1;
            return 1;
            break;
           
        case 5:
            *valorTotal += 1000;
            *qtdAcessorios+=1;
            return 1;
            break;
           
        case 6:
            return 0;
            break;
           
        default :
 
            break;
       
    }
 
   
}
