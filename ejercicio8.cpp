// Dada la estabilidad económica que existe en nuestro país, las agencias automotrices comienzan a
// ofrecer distintos planes de financiamiento para la comercialización de sus vehículos. La empresa XGW
// DEL MEXICO, S.A. ofrece el siguiente plan de financiamiento: dado el monto total del vehículo, el
// cliente debe pagar el 35% de enganche y el resto en 18 mensualidades iguales sin intereses. Construir
// un programa que permita obtener cual es el importe del enganche y las mensualidades que debe pagar
// el cliente.
 
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

float valor, enganche, resto, mensual = 0;

int main (){
	printf("Ingresa el monto: ");
	scanf("%f", &valor);

    enganche = valor * 0.35;
    printf("Valor Enganche =  %f\n", enganche);

    resto = valor - enganche;
    mensual = resto / 18;
    printf("18 cuotas de %f\n", mensual);
}