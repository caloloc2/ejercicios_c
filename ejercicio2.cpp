// La relación entre los lados (a, b) de un triángulo y la hipotenusa (h) viene dada por la formula a2+b2 = h2
// Escribir un programa que lea la longitud de los lados y calcule la hipotenusa.

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

unsigned long long int a, b = 0;
float h = 0;

int main (){
	printf("Ingresa un lado del triangulo (a): ");
	scanf("%llu", &a);

    printf("Ingresa el otro lado del triangulo (b): ");
	scanf("%llu", &b);

    h = sqrt((a*a) + (b*b));

    printf("El valor de la hipotenusa es: %f\n", h);
}