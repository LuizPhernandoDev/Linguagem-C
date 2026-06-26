#include <stdio.h>

int main(){
	
	// o % verifica qual é o resto inteiro da divisão de dois números inteiros 
	
	// por 10 ela entregará o ultimo digito
	
	printf("%d\n", 1 % 10);       //imprime 1
	printf("%d\n", 2 % 10);       //imprime 2
	printf("%d\n", 3 % 10);       //imprime 3
	printf("%d\n", 4 % 10);       //imprime 4
	printf("%d\n", 5 % 10);       //imprime 5
	printf("%d\n", 6 % 10);       //imprime 6
	printf("%d\n", 7 % 10);       //imprime 7
	printf("%d\n", 8 % 10);       //imprime 8
	printf("%d\n", 9 % 10);       //imprime 9
	printf("%d\n", 10 % 10);      //imprime 0

/*
Verifica se um número é par ou ímpar

x é par se x % y == 0

*/

	printf("%d\n", 0 % 2);        //imprime 0 ==> par
	printf("%d\n", 1 % 2);        //imprime 1 ==> impar
	printf("%d\n", 2 % 2);        //imprime 0 ==> par
	printf("%d\n", 3 % 2);        //imprime 1 ==> impar
	
/*
Verifica se um número é múltiplo de outro

x é múltiplo de y se x % y == 0
*/
	
	printf("%d\n", 15 % 5);       //imprime 0 ==> 15 é múltiplo de 5
	
	return 0;
}