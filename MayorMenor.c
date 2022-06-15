//Juego de adivinar el numero mmaximo
#include<stdio.h>

int main () {

    int x, y, z; 
    int max, min;

    printf("Ingresa el valor de x: ");
    scanf("%i", &x);

    printf("Ingresa el valor de y: ");
    scanf("%i", &y);

    printf("Ingresa el valor de z: ");
    scanf("%i", &z);



        if (x > y) {
            if (x > z){
                    max = x; 
        
            }
            else{
                    max = z; 
            }
        }
        else{
            if (y   > x);{
                max = y;
            }
            else{
                max = z;
            }
        }

        printf  ("El mayor de los tres numeros es; %i./n, max);

        return 0; 7
        

}