#include <stdio.h>
#include <stdlib.h>

typedef struct dadosCompra {
	
	int modeloCarro;
	int qtdAcessorios;
	int valorAcessorios;
	float valorTotal;
	
} dadosCompra;


int main (void){
	
	float total;
	
	dadosCompra *dCompra = (dadosCompra *)malloc(sizeof(dadosCompra));
	
	dCompra->valorAcessorios = 0;
	
	selecionaModelo(dCompra);
	
	selecionaAcessorios(dCompra);
	

		if (dCompra->qtdAcessorios == 2){
			
			dCompra->valorTotal = dCompra->valorTotal + (dCompra->valorAcessorios - dCompra->valorAcessorios*0.1);
		}
		
		if (dCompra->qtdAcessorios == 3){
			
			dCompra->valorTotal = dCompra->valorTotal + (dCompra->valorAcessorios - dCompra->valorAcessorios*0.15);
		}
		
		if (dCompra->qtdAcessorios == 5){
			
			dCompra->valorTotal = dCompra->valorTotal + (dCompra->valorAcessorios - dCompra->valorAcessorios*0.2);
		}
	
	
	printf("\nValor total a pagar: %f", dCompra->valorTotal);
	
	return 0;
	
}


selecionaModelo(dadosCompra *cpr){
	
	int modeloSelecionado;
	
    printf("Selecione o modelo:\n\n");
    printf("1 - Dib_Turbo $20.000\n");
    printf("2 - Dib_MV7 $15.000\n");
    printf("3 - Dib_Stander $12.000\n");
    
    scanf("%d", &modeloSelecionado);
    
	cpr->modeloCarro = modeloSelecionado;
	
    
    switch (modeloSelecionado){
    	
    	case 1:
    		cpr->valorTotal = 20000;
    		break;
    	case 2:
    		cpr->valorTotal = 15000;
    		break;
    	case 3:
    		cpr->valorTotal = 12000;
    		break;
    		
    	default:
    		break;
   	}
       
}


selecionaAcessorios(dadosCompra *cpr){
	
	int acessorioSelecionado = 0;
	
	while (acessorioSelecionado < 6){
		
	printf("Selecione os opcionais:\n\n");
    printf("1 - Ar condicionado $2.000\n");
    printf("2 - Dir. hidraulica $1.500\n");
    printf("3 - Motor 2.0 $1.000\n");
    printf("4 - Vidros eletricos $1.000\n");
    printf("5 - Bancos de couro $1.000\n");
    printf("6 - Sair\n");
   
    scanf("%d",&acessorioSelecionado);
    
    
    
    switch (acessorioSelecionado){
    	
    	case 1:
    		
    		cpr->valorAcessorios += 2000;
    		cpr->qtdAcessorios += 1;
      		break;
    		
   		 case 2:
    		cpr->valorAcessorios += 1500;
    		cpr->qtdAcessorios += 1;
    		break;
   		 case 3:
    		cpr->valorAcessorios += 1000;
    		cpr->qtdAcessorios += 1;
    		break;
    	case 4:
    		cpr->valorAcessorios += 1000;
    		cpr->qtdAcessorios += 1;
    		break;
    	case 5:
    		cpr->valorAcessorios += 1000;
    		cpr->qtdAcessorios += 1;
    		break;
    	case 6:
    		break;
    		
    	default:
    		cpr->valorAcessorios = 0;
    		break;
   	
		}
         
	}
}
