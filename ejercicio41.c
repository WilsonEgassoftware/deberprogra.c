#include <stdio.h>

int main() {
    int numeros[10];//alamcenamos en un vector de 10 datos
    int contador = 0;
    int primerDigito;// el valor que se leera y que nos servira en la comparación
    // Leer 10 números enteros y almacenarlos en el vector.
    printf("Ingrese 10 numeros enteros:\n");//obtenemos los datos que pedimos
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);//lo leemos juntos con el vector almacenanado los 10 datos
    }

    // Determinar cuántos números comienzan con el dígito 3.
    for (int i = 0; i < 10; i++) {
        int primerDigito = numeros[i];//realizamos la comparación de los datos para obtenerlos junto con el vector
        if (primerDigito == 0) {
            contador++; // Número igual a 0 se considera como comenzando con 3.
        } else {
            while (primerDigito < -9 || (primerDigito > 0 && primerDigito > 9)) {// la condicional de los mayores que deben ser menores a 10 positivos y negativos
                primerDigito / 10;//division de los datos sobre le total de 10 valores
            }
            if (primerDigito == 3) {//si el primer digitico cumple la condición se suman al contador
                contador++;//suma del contador
            }
        }
    }

    // Mostrar el resultado.
    printf("Cantidad de números que comienzan con el digito 3: %d\n", contador);//obtenermos el valor final de los datos con la condicional anterior

    return 0;
}
