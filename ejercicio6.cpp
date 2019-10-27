// Elaborar un programa que escriba el resultado de la siguiente expresión:
// D = √(𝑋1 − 𝑋 2)2 + (𝑌1 − 𝑌 2)2
 

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

float x, xx, y, yy, D = 0;

int main (){
	printf("Ingresa el valor para X1: ");
	scanf("%f", &x);
    printf("Ingresa el valor para X2: ");
	scanf("%f", &xx);
    printf("Ingresa el valor para Y1: ");
	scanf("%f", &y);
    printf("Ingresa el valor para Y2: ");
	scanf("%f", &yy);  

    D = sqrt((pow((x - xx), 2) + pow((y - yy), 2)));

    printf("D =  %f\n", D);    
}