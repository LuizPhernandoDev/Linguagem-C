#include <stdio.h>

float calcularArea(float base, float altura);

int main() {
    float Base = 8, Altura = 10;
    
    printf("A area e: %.1f\n", calcularArea(Base, Altura));
    
    return 0;
}

float calcularArea(float base, float altura) {
    return base * altura;
}