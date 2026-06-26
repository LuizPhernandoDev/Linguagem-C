#include <stdio.h>

int main(){

	printf("%d\n", 0 * 1);                //imprime 0
	printf("%d\n", 1 * 1);                //imprime 1
	printf("%f\n", 0.0 * 1.0);            //imprime 0.000000
	printf("%f\n", 1.0 * 1.0);            //imprime 1.000000
	printf("%f\n", 1.0 * 1);              //imprime 1.000000
	printf("%f\n", 1 * 1.0);              //imprime 1.000000
	
	printf("%f\n", (float)1 * (float)1);  //imprime 1.000000
	printf("%f\n", (float)1 * 1);         //imprime 1.000000
	printf("%f\n", 1 * (float)1);         //imprime 1.000000
	
	printf("%d\n", (int)1.0 * (int)1.0);  //imprime 1
	printf("%f\n", 0.3333333 * 3);        //imprime 1.000000 ==> mas o valor não é 1!
	printf("%.7f\n", 0.3333333 * 3);      //imprime 0.9999999
	printf("%f\n", 1e1 - 1);              //imprime 9.000000 
	printf("%e\n", 1e3 * 1e6);            //imprime 1.000000e+09 
	printf("%e\n", 1e6 * 1e-9);           //imprime 1.000000e-003
	printf("%f\n", 1e6 * 1e-9);           //imprime 0.001000 
	
	
	printf("%d\n", '!' * 2);              //imprime 66
	printf("%c\n", '!' * 2);              //imprime B
	printf("%c\n", 33 * 2);               //imprime B
	
	//cuidado com os especificadores de formato
	
	printf("%d\n", 1.0 * 10.0);           //imprime 0
	printf("%d\n", (int)(10.0 * 1.0));    //imprime 10
	printf("%f\n", 1 * 1);                //imprime 0.000000
	printf("%f\n", (float)(10 * 1));      //imprime 10.000000
	
	return 0;
}