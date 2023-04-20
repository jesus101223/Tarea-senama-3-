/*
construya un programa en c que permita leer 2 números enteros
 y determinar cuál de los dos tiene mayor cantidad de dígitos primos.
*/
#include <stdio.h>

int es_primo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int contar_digitos_primos(int num) {
    int digito, cant_digitos_primos = 0;

    while (num != 0) {
        digito = num % 10;
        if (es_primo(digito)) {
            cant_digitos_primos++;
        }
        num = num / 10;
    }

    return cant_digitos_primos;
}

int main() {
    int num1, num2, cant_digitos_primos_num1 = 0, cant_digitos_primos_num2 = 0;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    cant_digitos_primos_num1 = contar_digitos_primos(num1);
    cant_digitos_primos_num2 = contar_digitos_primos(num2);

    if (cant_digitos_primos_num1 > cant_digitos_primos_num2) {
        printf("El primer numero tiene mas digitos primos.");
    }
    else if (cant_digitos_primos_num2 > cant_digitos_primos_num1) {
        printf("El segundo numero tiene mss digitos primos.");
    }
    else {
        printf("Ambos numeros tienen la misma cantidad de digitos primos.");
    }

    return 0;
}
