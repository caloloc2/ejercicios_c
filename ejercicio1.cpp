// Elaborar un programa en C que convierta un número proporcionado por el usuario y lo convierta en su
// equivalente en formato Hexadecimal y Octal.
#include "stdlib.h"
#include "stdio.h"

// El número que el usuario va a ingresar
unsigned long long int decimal = 0;

// Una cadena donde se guardara el resultado o conversion
char resultado[63];

int main (){
	printf("Ingresa un numero decimal: ");
	scanf("%llu", &decimal);

	ltoa(decimal, resultado, 8);
    printf("El numero en octal es: %s\n", resultado);

	ltoa(decimal, resultado, 16);
    printf("El numero en hexadecimal es: %s\n", resultado);
}