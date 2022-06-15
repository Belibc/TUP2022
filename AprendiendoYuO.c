//Juego que acepte tres numeros, horas, minutos y segundos y devuelva la hora que sera dentro de un segundo, cotrolando que sea una hora correcta. 
#include<stdio.h>

int main(){

    int h, min, seg; 

    printf("Ingresa una hora.\n");
    scanf("%i",&h);  

    printf("Ingresa los minutos.\n");
    scanf  ("%i",&min); 

    printf  ("Y por ultimo ingrese los segundos.\n");
   scanf  ("%i",&seg); 


    if (h <= 23 && min <= 59 && seg <= 59 ){
        seg += 1;  
        printf  ("La hora es: %i : %i : %i.\n", h, min, seg); 
    }
    else 
    {

            printf("La hora que ingresaste no es un horario valido.\n");
        
    }
    


    return 0
}