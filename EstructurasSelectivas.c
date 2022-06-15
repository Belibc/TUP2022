//Juego de adivinar un numero del 1 al 10
#include<stdio.h>

int main (){
    int  x,y; 

    x = 5;

    printf("Ingrese un valor entre 1 y 10: ");
    scanf("%i",&y);        
    
    if (x==y) {
        printf("Correcto!, este valor es acertado.\n");
    
    }
    else    {
        printf("El valor ingresado es incorrecto.\n");
    }

    return 0; 
}