#include <stdio.h>
int main (){
    int numero[10];
    int referencia;
    int contador=0;
    int ultimoDigito= referencia/10;

    //leer los 10 numeros y almacenarlos
    printf("Ingrese 10 datos enteros:");
    for (int i=0 ; i < 10; i++){
        scanf("%d",&numero[i]);
    }

    //leer un ejercicio adicional para obtener una referencia
    printf("Ingrese un dato entero de prueba:\n");
    scanf("%d",&referencia);

    //A través del vector y contar cuántos números terminan en el mismo dígito.
    for(int i=0; i<10;i++){
        int ultimoDigito = numero[i]/10;
        if(ultimoDigito==ultimoDigito){

        } 
    }
    //obtener el resultado
    printf("El resultado de la misma cantidad de digitos es %d:%d\n", referencia, contador);

    return 0;
}