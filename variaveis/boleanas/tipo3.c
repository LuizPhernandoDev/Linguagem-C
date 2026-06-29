#include <stdio.h>
#include <stdbool.h> // biblioteca que altera a palavra bool por _Bool e true e false por 1 e 0

int main() {
    
    bool Verdadeiro = true; 
    bool Falso = false;
    
    printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) | Intervalo\n");
    printf("                   |   de formato    |                 |\n");
    printf("-------------------|-----------------|-----------------|----------\n");
    printf("       bool        |        %%d       |        %zu        |   %d a %d  \n", sizeof(bool), Falso, Verdadeiro);
    
    return 0;
}