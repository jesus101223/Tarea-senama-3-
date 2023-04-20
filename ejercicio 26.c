/*
construya un programa en c que permita leer un número
 entero y determinar cuál es el mayor de sus dígitos
*/

#include <stdio.h>

int main() {
    int num, digito, mayor = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    while (num != 0) {
        digito = num % 10;
        if (digito > mayor) {
            mayor = digito;
        }
        num = num / 10;
    }

    printf("El mayor dígito del número es: %d", mayor);

    return 0;
}


