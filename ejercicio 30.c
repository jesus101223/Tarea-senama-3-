/*
construya un programa en c que permita leer un número entero y mostrar todos sus componentes numéricos, o
sea, aquellos para quienes él sea un múltiplo.
*/
#include <stdio.h>

int main() {
    int num, i;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    printf("Los componentes numericos de %d son: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
