#include <stdio.h>

int esPrimo(int num) {// funcion para verificar si es numero primo
    if (num <= 1) {
        return 0; // 0 y 1 no son primos
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Es primo
}

int main() {
    int primos[10];
    int contador = 0;

    // Buscar números primos entre 100 y 300
    for (int i = 100; i <= 300 && contador < 10; i++) {
        if (esPrimo(i)) {
            primos[contador] = i;
            contador++;
        }
    }

    // Mostrar los números primos en pantalla
    printf("Los 10 números primos entre 100 y 300 son: ");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", primos[i]);
    }

    return 0;
}


