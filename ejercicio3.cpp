// Escribir un programa, que visualice en pantalla la letra B con un carácter proporcionado por el usuario.

#include "stdlib.h"
#include "stdio.h"
#include "math.h"

unsigned char letra = ' ';

int main (){
	printf("Ingresa un caracter: ");
	scanf("%c", &letra);

    for (int y=0; y<9; y++){
        for (int x=0; x<7; x++){
            if ((y==0) || (y==4) || (y==8)){                
                if ((x==0) || (x==6)){
                    printf(" ");
                }else{
                    printf("%c", letra);
                }
            }else{
                if ((x==0) || (x==6)){
                    printf("%c", letra);
                }else{
                    printf(" ");
                }
            }            
        }
        printf("\n");
    }
}