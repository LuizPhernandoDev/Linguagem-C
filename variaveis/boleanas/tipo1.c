/*
é posivel usar um int e considerar 1 como verdadeiro e 0 com falso,
mas qualquer outro valor possível do int seria coniderado como verdedeiro
utilizando os tipos boleanos, limitamos os valores possíveis para 1 ou 0 
*/

/*
por mais que esse tipo é nativa da linguagem,
coloquei ele aqui para ficar mais compreensivo
*/
#include <stdio.h>

int main() {
    
    _Bool Verdadeiro = 1; 
    _Bool Falso = 0;
    
    printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) | Intervalo\n");
	printf("                   |   de formato    |                 |\n");
	printf("-------------------|-----------------|-----------------|----------\n");
	printf("       _Bool       |        %%d       |        %zu        |   %d a %d  \n", sizeof(_Bool), Falso, Verdadeiro);
	
    return 0;
}