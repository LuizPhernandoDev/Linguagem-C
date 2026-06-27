#include <stdio.h>

int main(){

	printf("%d\n", 0 >= 0);       //imprime 1
	printf("%d\n", 0.0 >= 0.0);   //imprime 1
	printf("%d\n", 0.0 >= 0);     //imprime 1
	printf("%d\n", 0 >= 0.0);     //imprime 1
	
	printf("%d\n", 1 >= 0);       //imprime 1
	printf("%d\n", 0 >= 1);       //imprime 0
	
	printf("%d\n", 0.1 >= 0.0);   //imprime 1
	printf("%d\n", 0.0 >= 0.1);   //imprime 0
	
	return 0;
}