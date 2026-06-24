#include <stdio.h>
#include <math.h>

int main(){
	
	// valores inteiros
	char Char; // %c 
	int Int;
	
	// valores de ponto flutuanes(com casas decimais)
	float Float;
	double Double;
	
	printf("Tipos de variaveis | Tamanho (Byts) |            Intervalo\n");
	printf("       char        |        %d       |           %d a %d\n", sizeof(char), (int) - pow(2, sizeof(char) * 8 - 1), (int)pow(2,sizeof(char) * 8 - 1) - 1);
	printf("       int         |        %d       |    %d a %d\n", sizeof(int), (int) - pow(2, sizeof(int) * 8 - 1), (int) pow(2, sizeof(int) * 8 - 1));
	printf("      float        |        %d       | %e a %e\n", sizeof(float), -pow(2, -126), pow(2, 128));
	printf("      double       |        %d       | %e a %e\n", sizeof(double) , -pow(2, -1022), (2.0 - pow(2, -52)) * pow(2, 1023));
	
  return 0;
}