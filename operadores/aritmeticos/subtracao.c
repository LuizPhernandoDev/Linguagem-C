#include <stdio.h>

int main(){

	printf("%d\n", - 1);                  //imprime -1
	printf("%d\n", - 0);                  //imprime 0
	printf("%f\n", - 1.0);                //imprime -1.000000
	printf("%f\n", - 0.0);                //imprime 0.000000
	
	printf("%d\n", 1 - 1);                //imprime 0
	printf("%f\n", 1.0 - 1.0);            //imprime 0.000000
	printf("%f\n", 1.0 - 1);              //imprime 0.000000
	printf("%f\n", 1 - 1.0);              //imprime 0.000000
	
	printf("%f\n", (float)1 - (float)1);  //imprime 0.000000
	printf("%f\n", (float)1 - 1);         //imprime 0.000000
	printf("%f\n", 1 - (float)1);         //imprime 0.000000
	
	printf("%d\n", (int)1.0 - (int)1.0);  //imprime 0
	printf("%.2f\n", 1.0 - 1.0);          //imprime 0.00
	printf("%e\n", 1.0 - 1.0);            //imprime 0.000000e+000 ==> notação científica!
	printf("%f\n", 1e1 - 1);              //imprime 9.000000 
	printf("%d\n", 1 - 2);                //imprime -1
	
	printf("%d\n", 'B' - 1);              //imprime 65
	printf("%c\n", 'B' - 1);              //imprime A
	printf("%c\n", 66 - 1);               //imprime A
	
	//cuidado com os especificadores de formato
	
	printf("%d\n", 10.0 - 1.0);           //imprime 0
	printf("%d\n", (int)(10.0 - 1.0));    //imprime 9
	printf("%f\n", 10 - 1);               //imprime 0.000000
	printf("%f\n", (float)(10 - 1));      //imprime 9.000000
	
	return 0;
}