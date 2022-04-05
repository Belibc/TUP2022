#include<stdio.h>


void main()
{
        float lado1, lado2, lado3;                 //variable de entrada
        float perimetro;                           //variable de salida

        printf("ingresar el valor del lado 1:" );
        scanf("%f", &lado1);

        printf("ingresar el valor del lado 2:" );
        scanf("%f", &lado2);

        printf("ingresar el valor del lado 3:" );
        scanf("%f", &lado3);

        perimetro = lado1 + lado2 + lado3;

        printf("perimetro = %.2f",perimetro);

        return;

}