//Ahora voy a hacer operaciones con variables 
#include <stdio.h>
#define PI 3.1416

int main ()10{
    float x; 
    int y; 

    x = PI;
    
    printf  ("Introduce el valor de y: ");
    scanf  ("%i",&y);
    printf  ("El valor de y: %i.\n",y);

    x = x * y;

    printf  ("El nuevo valor de x es: %f.\n",x);

    return 0;
}
