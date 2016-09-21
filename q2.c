#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct vendedor{
 
    float salariofixo, salariototal;   
 
} Vendedor;
 
typedef struct comissao {
 
    int tvcor, tvpeb;
    float comissao;
 
} Comissao;
 
typedef struct impostos {
 
    float irrf, inps;
 
} Impostos;
 
   
void calculaComissao(Comissao *cms, Vendedor *vnd) {
   
    vnd->salariototal = vnd->salariofixo;
   
    if (cms->tvcor > 10)
        {
            cms->comissao = 50;
            vnd->salariototal = vnd->salariototal + (cms->comissao*cms->tvcor);
        }
    else
        {
            cms->comissao = 5;
            vnd->salariototal = vnd->salariototal + (cms->comissao*cms->tvcor);
        }
               
    if (cms->tvpeb > 20)
        {
            cms->comissao = 20;
            vnd->salariototal = vnd->salariototal + (cms->comissao*cms->tvpeb);
        }
    else
        {
            cms->comissao = 2;
            vnd->salariototal = vnd->salariototal + (cms->comissao*cms->tvpeb);
        }  
}
 
void calculaImposto (Vendedor *vnd, Impostos *imp){
   
    imp->inps = (vnd->salariototal*0.08);
    vnd->salariototal = (vnd->salariototal - imp->inps);
   
    if (vnd->salariototal >= 500)
        {
            imp->irrf = (vnd->salariototal*0.05);
            vnd->salariototal = (vnd->salariototal - imp->irrf);
        }
}
 
int main(void)
{
    Vendedor *vnd = (Vendedor *)malloc(sizeof(Vendedor));
    Comissao *cms = (Comissao *)malloc(sizeof(Comissao));
    Impostos *imp = (Impostos *)malloc(sizeof(Impostos));
   
    printf ("Entre com seu salario fixo\n");
    scanf ("%f", &vnd->salariofixo);
   
    printf ("Quantos Televisores a cores voce vendeu? \n");
    scanf ("%d", &cms->tvcor);
   
    printf ("Quantos Televisores preto e branco voce vendeu? \n");
    scanf ("%d", &cms->tvpeb);
   
    calculaComissao(cms,vnd);
   
    calculaImposto (vnd, imp);
   
           
    //=======================
 
    printf ("O seu salario final eh %.2f \n", vnd->salariototal);
    printf ("O desconto do INPS foi de %.2f\n", imp->inps);
    printf ("O desconto do Imposto de Renda foi de %.2f", imp->irrf);
   
    printf ("\n\nAperte qualquer tecla para fechar");
    getchar();
    getchar();
   
}
