// Elaborar un programa que dibuje un rectángulo, utilizando un carácter proporcionado por el usuario.
// Ejemplo, si el usuario selecciona un *, el resultado será el siguiente:
// * * * * * * * * * * *
// *      H O L A      *
// * * * * * * * * * * *
// *                   *
// *                   *
// * * * * * * * * * * *

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

unsigned char letra = ' ';
char hola[] = { 'H', 'O', 'L', 'A' } ;
int i = 0;

int main (){
	printf("Ingresa un caracter: ");
	scanf("%c", &letra);

    for (int y=0; y<6; y++){
        for (int x=0; x<12; x++){
            if ((y==0) || (y==2) || (y==5)){
                printf("%c", letra);                
            }else{
                if ((x==0) || (x==11)){
                    printf("%c", letra);
                }else{
                    if (y==1){
                        printf(" ");
                        printf("%c", hola[i]);
                        i = i + 1;
                    }else{
                        printf(" ");
                    }
                }
            }            
        }
        printf("\n");
    }
}