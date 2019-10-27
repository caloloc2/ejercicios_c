// Diseñar un programa que, dados los tres lados de un triángulo, pueda determinar su área, aplicando
// la siguiente fórmula:
// AREA = √S ∗ (S − L1) ∗ (S − L2) ∗ (S − L3)  y S = (L1+ L2 + L3) / 2

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

unsigned long long int l1, l2, l3 = 0;
float S, A = 0;

int main (){
	printf("Ingresa el valor para L1: ");
	scanf("%llu", &l1);
    printf("Ingresa el valor para L2: ");
	scanf("%llu", &l2);
    printf("Ingresa el valor para L3: ");
	scanf("%llu", &l3);

    S = (l1+l2+l3) / 2;

    A = sqrt((S * (S-l1) * (S-l2) * (S-l3)));

    printf("El area es es: %f\n", A);
}