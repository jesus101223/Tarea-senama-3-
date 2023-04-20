/*
construya un programa en c que permita leer un número entero 
y determinar a cuánto es igual el primero de sus dígitos
*/



#include <stdio.h>

int main() {
    int num, primer_digito;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    primer_digito = num;

    while (primer_digito >= 10) {
        primer_digito /= 10;
    }

    printf("El primer digito del numero es: %d", primer_digito);

    return 0;
}
