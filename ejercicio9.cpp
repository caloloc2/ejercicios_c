// Elaborar un programa en el cual sabiendo el peso en libras nos calcule el peso en kilogramos y
// gramos. Cada libra es igual 453.59237 gramos.
 
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

const float conversion = 453.59237;
float libras, kilos, gramos = 0;

int main (){
	printf("Ingresa el peso en libras: ");
	scanf("%f", &libras);

    gramos = (libras * conversion);
    kilos = gramos * 1000;
    
    printf("Peso en gramos =  %f\n", gramos);
    printf("Peso en Kilogramos =  %f\n", kilos);
}