#include <stdio.h>

int main(){

    //transforma 0 em 1 e qualquer outro valor em 0
	printf("%d\n", !0);   //imprime 1
	printf("%d\n", !1);   //imprime 0
	printf("%d\n", !33);  //imprime 0
	printf("%d\n", !22);  //imprime 0
	printf("%d\n", !74);  //imprime 0
	
	return 0;
}