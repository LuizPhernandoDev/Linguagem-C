#include <stdio.h>

int main(){

	printf("%d\n", 1 / 1);                //imprime 1
	printf("%f\n", 1.0 / 1.0);            //imprime 1.000000
	printf("%f\n", 1 / 1.0);              //imprime 1.000000
	printf("%f\n", 1.0 / 1);              //imprime 1.000000
	
	printf("%f\n", (float)1 / (float)1);  //imprime 1.000000
	printf("%f\n", (float)1 / 1);         //imprime 1.000000
	printf("%f\n", 1 / (float)1);         //imprime 1.000000
	
	printf("%d\n", 1 / 2);                //imprime 0
	printf("%f\n", 1.0 / 2.0);            //imprime 0.500000 
	printf("%f\n", 1 / 2.0);              //imprime 0.500000 
	printf("%f\n", 1.0 / 2);              //imprime 0.500000 
	
	printf("%f\n", 1.0 / 1e6);            //imprime 0.000001
	printf("%f\n", 1.0 / 1e9);            //imprime 0.000000 ==> mas o valor não é 0!
	printf("%.9f\n", 1.0 / 1e9);          //imprime 0.000000001
	
	printf("%f\n", 1.0 / 1e-9);           //imprime 1000000000.000000
	printf("%e\n", 1.0 / 1e-9);           //imprime 1.000000e+09
	
	printf("%d\n", (int)1.0 / (int)1.0);  //imprime 1
	printf("%f\n", 1.0 / 3.0);            //imprime 0.333333 
	printf("%e\n", 1e3 / 1e6);            //imprime 1.000000e-03
	printf("%e\n", 1e6 / 1e-9);           //imprime 1.000000e+15
	printf("%f\n", 1e2 / 1e-4);           //imprime 1000000.000000
	
	printf("%d\n", 'r' / 3);              //imprime 38
	printf("%c\n", 'r' / 3);              //imprime &
	printf("%c\n", 114 / 3);              //imprime &
	
	//cuidado com os especificadores de formato
	
	printf("%d\n", 1.0 * 10.0);           //imprime 0
	printf("%d\n", (int)(10.0 / 1.0));    //imprime 10
	printf("%f\n", 1 * 1);                //imprime 0.000000
	printf("%f\n", (float)(10 / 1));      //imprime 10.000000
	
	return 0;
}