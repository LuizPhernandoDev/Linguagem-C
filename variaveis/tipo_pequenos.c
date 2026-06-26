#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(){
	
	// valores inteiros
	// eh redundante colocar o int na frente, pode ser abreviado por short
	short int Int; 
	
	printf("Tipos de variaveis | Especificadores | Tamanho (Byts) |       Intervalo\n");
	printf("                   |   de formato    |                |\n");
	printf("-------------------|-----------------|----------------|----------------------\n");
	printf("    short int      |       %%hd       |       %zu        |    %d a %d         \n", sizeof(short int), SHRT_MIN, SHRT_MAX);
	
  return 0;
}