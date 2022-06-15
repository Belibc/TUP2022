//Juego de adivinar los dias de la semana 
#include <stdio.h>

int main (){

    int x;

    printf("Introducir un numero entre 1 y 4: ");
    scanf("%i",&x);

    switch (x)
    {
    case 1: printf ("Lunes. \n"); break;
    case 2: printf ("Martes.\n"); break;
    case 3: printf ("Miercoles.\n"); break;
    case 4: printf ("Jueves\n"); break;
    default:  printf ("El numero elegido no es valido.\n");
    }


    return 0; 
}