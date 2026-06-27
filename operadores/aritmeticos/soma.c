#include <stdio.h>

int main(){

	printf("%d\n", 1 + 1);                //imprime 2
	printf("%f\n", 1.0 + 1.0);            //imprime 2.000000
	printf("%f\n", 1.0 + 1);              //imprime 2.000000
	printf("%f\n", 1 + 1.0);              //imprime 2.000000
	
	printf("%f\n", (float)1 + (float)1);  //imprime 2.000000
	printf("%f\n", (float)1 + 1);         //imprime 2.000000
	printf("%f\n", 1 + (float)1);         //imprime 2.000000
	
	printf("%d\n", (int)1.0 + (int)1.0);  //imprime 2
	printf("%.2f\n", 1.0 + 1.0);          //imprime 2.00
	printf("%e\n", 1.0 + 1.0);            //imprime 2.000000e+000 ==> notação científica!
	printf("%f\n",  1e0 + 1e0);           //imprime 2.000000
	
	printf("%d\n", 'A' + 1);              //imprime 66
	printf("%c\n", 'A' + 1);              //imprime B
	printf("%c\n", 65 + 1);               //imprime B
	
	//cuidado com os especificadores de formato
	
	printf("%d\n", 10.0 + 1.0);           //imprime 0
	printf("%d\n", (int)(10.0 + 1.0));    //imprime 11
	printf("%f\n", 10 + 1);               //imprime 0.000000
	printf("%f\n", (float)(10 + 1));      //imprime 11.000000
	
	return 0;
}