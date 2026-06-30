#include <stdio.h>

int main() {
    int numero = 10;
    int *ptr = &numero;  
    int **ptrDuplo = &ptr;

    printf("Valor de numero: %d\n", numero);
    printf("Endereco de numero: %p\n", &numero);

    printf("\n");

    printf("Valor apontado pelo ponteiro: %d\n", *ptr); 
    printf("Valor guardado no ponteiro (endereco): %p\n", ptr);
    printf("Endereco do ponteiro Duplo: %p\n", &ptr);

    printf("\n");

    printf("Valor apontado pelo ponteiro Duplo: %d\n", **ptrDuplo); 
    printf("Valor guardado no ponteiro Duplo (endereco): %p\n", ptrDuplo);
    printf("Endereco do ponteiro: %p\n", &ptrDuplo);
    
    return 0;
}