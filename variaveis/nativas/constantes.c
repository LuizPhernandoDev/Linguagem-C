#include <stdio.h>

//estrutura de definição de constantes
#define PI 3.141592653
#define dias 7
#define comprimento "Ola"

int main() {
    
    int Raio = 10;   
    
    printf("Raio: %d\n", Raio);
    printf("Perimetro: %f\n", 2*PI*Raio);
    printf("Area: %f\n", PI*Raio*Raio);
    
    printf("Dias da semana: %d\n", dias);
    
    printf("%s mundo!\n", comprimento);
	
    return 0;
}