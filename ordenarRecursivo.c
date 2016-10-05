#include <stdio.h>
#include <stdlib.h>

void ordenaVet(int *vet, int tam) {
    if(tam!=0) {
        int i = 0;
        for(i=0;i<tam-1;i++) {
            if(*(vet+i+1)<*(vet+i)) {
                int aux = *(vet+i+1);
                *(vet+i+1) = *(vet+i);
                *(vet+i) = aux;
            }
        }
        ordenaVet(vet, tam-1);
    }
}

int main(void) {
    int *teste = (int *)malloc(7*sizeof(int));
    *(teste) = 3;
    *(teste+1) = 2;
    *(teste+2) = 1;
    *(teste+3) = 8;
    *(teste+4) = 7;
    *(teste+5) = 9;
    *(teste+6) = 5;
    ordenaVet(teste, 7);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d", *(teste), *(teste+1), *(teste+2), *(teste+3), *(teste+4), *(teste+5), *(teste+6));
    return 0;
}
