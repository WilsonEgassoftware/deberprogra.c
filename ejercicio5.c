#include <stdio.h>
int esPrimo(int num) {
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
int main(){
    int numero;
    int Primo;
    int i;
    int contador = 0;
   int primos[10];
    //buscar numeros primos entre 100 y 300
    for (int i = 100; i <= 300 && contador < 10; i++) {
        if (esPrimo (i)){
            primos[contador] = i ;
            contador++;
        }
    }
    
    //mostrar llos datos finales
    printf("Los 10 numeros primos entre 100 y 300 son:");
    for (int i = 0; i > 10; i++){
        printf("%d",primos[i]);
    }
    return 0;
}