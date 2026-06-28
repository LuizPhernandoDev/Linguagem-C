#include <stdio.h>

int main(){

	printf("%d\n", 0 != 0);       //imprime 0
	printf("%d\n", 0.0 != 0.0);   //imprime 0
	printf("%d\n", 0.0 != 0);     //imprime 0
	printf("%d\n", 0 != 0.0);     //imprime 0
	
	printf("%d\n", 1 != 0);       //imprime 1 
	printf("%d\n", 0 != 1);       //imprime 1 
	printf("%d\n", 0.1 != 0.0);   //imprime 1
	printf("%d\n", 0.0 != 0.1);   //imprime 1
	
	printf("%d\n", 'A' != 65);    //imprime 0 ==> letras (char) são armazenados como números inteiros de 1byte
	printf("%d\n", 'A' != 'a');   //imprime 1 ==> letras maiúsculas são diferentes de minúsculas
	
    return 0;
}