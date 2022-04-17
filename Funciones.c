#include<stdio.h>
#include<stdlib.h>

float precio (float base, float impuesto); /*Declaración de Función*/

int main()
{
    float importe = 2.5;
    float tasa = 0.07;
    printf("El precio a pagar es %.3f ", precio(importe, tasa));
    return 0;
    system ("pause");
}

float precio(float base, float impuesto) /*Definición*/
{
    float calculo;
    calculo = base + (base * impuesto);
    return calculo;
}
