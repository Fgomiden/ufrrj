#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int termo, int *vet, int inic, int fim) {
    int meio = (inic + fim) / 2;
    int val = *(vet+meio);
    if (val==termo)
        return meio;
    else if (val>termo)
        return buscaBinaria(termo, vet, inic, meio-1);
    else
        return buscaBinaria(termo, vet, meio+1, fim);
}

int main(void) {
    int *teste = (int *)malloc(5*sizeof(int));
    *(teste) = 1;
    *(teste+1) = 3;
    *(teste+2) = 4;
    *(teste+3) = 6;
    *(teste+4) = 42;
    printf("%d\n", buscaBinaria(3, teste, 0, 5));
    printf("%d\n", buscaBinaria(4, teste, 0, 5));
    printf("%d\n", buscaBinaria(42, teste, 0, 5));
    free(teste);
    return 0;
}
