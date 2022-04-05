 /* ejercicio 4: Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
perímetro, la superficie. Imprima los resultados de las operaciones solicitadas*/

#include<stdio.h>
#include<math.h>
void main()

{
    float lado1, lado2;  //datos de entrada
    float hipotenusa, perimetro, superficie; //datos de salida

    printf("ingresar el valor de lado1: ");
    scanf("%f", &lado1);

    printf("ingresar el valor de lado2: ");
    scanf("%f", &lado2);

    hipotenusa = sqrt (pow(lado1, 2) + pow(lado2, 2));

    perimetro = lado1 + lado2 + hipotenusa;

    superficie = (lado1 * lado2)/ 2;

    printf("hipotenusa = %.2f perimetro = %.2f superficie = %.2f", hipotenusa,  perimetro, superficie);
    return;
}
