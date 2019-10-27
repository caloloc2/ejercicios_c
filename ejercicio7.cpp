// Elaborar un programa que lea un número y escriba el valor absoluto del mismo.
 

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

int x, res = 0;

int main (){
	printf("Ingresa un valor: ");
	scanf("%i", &x);

    res = abs(x);

    printf("Valor absoluto =  %i\n", res);
}