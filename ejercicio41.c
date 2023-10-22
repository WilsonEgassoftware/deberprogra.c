#include <stdio.h>

int main() {
    int numeros[10];
    int contador = 0;
    int primerDigito;
    // Leer 10 números enteros y almacenarlos en el vector.
    printf("Ingrese 10 numeros enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    // Determinar cuántos números comienzan con el dígito 3.
    for (int i = 0; i < 10; i++) {
        int primerDigito = numeros[i];
        if (primerDigito == 0) {
            contador++; // Número igual a 0 se considera como comenzando con 3.
        } else {
            while (primerDigito < -9 || (primerDigito > 0 && primerDigito > 9)) {
                primerDigito / 10;
            }
            if (primerDigito == 3) {
                contador++;
            }
        }
    }

    // Mostrar el resultado.
    printf("Cantidad de números que comienzan con el digito 3: %d\n", contador);

    return 0;
}
