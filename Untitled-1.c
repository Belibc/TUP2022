/* Ejercicio 01: ingresar dos valores enteros. sumarlos e imprimir la suma. */
#include<stdio.h>

void main()
{
    printf("Ejercicio 1 Suma de numeros:\n");

    printf("ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("ingrese un numero entero: ");
    scanf("%d" , &num2);

    suma= num1 + num2;

    printf("La suma de %d y %d  los numeros ingresados es: %d \n", suma);

    printf("La suma de %d y %d  los numeros ingresados es: %d \n", num1, num2, suma);

    return;
}