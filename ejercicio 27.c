
/*
construya un programa en c que permita leer 2 números enteros y 
determinar cuál de los dos tiene mayor cantidad de dígitos
*/

#include <stdio.h>

int main() {
    int num1, num2, cant_digitos_num1 = 0, cant_digitos_num2 = 0;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    while (num1 != 0) {
        cant_digitos_num1++;
        num1 = num1 / 10;
    }
    while (num2 != 0) {
        cant_digitos_num2++;
        num2 = num2 / 10;
    }

    if (cant_digitos_num1 > cant_digitos_num2) {
        printf("El primer número tiene más dígitos.");
    }
    else if (cant_digitos_num2 > cant_digitos_num1) {
        printf("El segundo número tiene más dígitos.");
    }
    else {
        printf("Ambos números tienen la misma cantidad de dígitos.");
    }

    return 0;
}
