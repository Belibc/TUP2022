//Juego de saber si un numero es par o impar 
#include<stdio.h>

int main(){

    int x,y; 

    printf("Introducir un numero: ");
    scanf("%i",&y);

   x = y % 2;

   if (x == 0) {
       printf("El numero %i es par! \n",y);
   }
    else{
        printf("El numero %i no es par :( \n",y); 
    }

    return 0;

}