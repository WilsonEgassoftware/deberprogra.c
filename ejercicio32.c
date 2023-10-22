#include <stdio.h>
int main (){
    int numero[10];// cantidad de espacio que usaremos
    int referencia;//numero que nos servira verificar sus datos solo 10 datos
    int contador=0;//lo incializamos en 0
    int ultimoDigito= referencia/10;// declaramos una varible para obtener el ultimo valor y la referencia dividido para el total

    //leer los 10 numeros y almacenarlos
    printf("Ingrese 10 datos enteros:");
    for (int i=0 ; i < 10; i++){
        scanf("%d",&numero[i]);
    }

    //leer un ejercicio adicional para obtener una referencia
    printf("Ingrese un dato entero de prueba:\n");
    scanf("%d",&referencia);//leemos el dato de la referencia general para tener una idea 

    //A través del vector y contar cuántos números terminan en el mismo dígito.
    for(int i=0; i<10;i++){
        int ultimoDigito = numero[i]/10;
        if(ultimoDigito==ultimoDigito){//obtenemos el resultado de los datos con una division entre 10 del total

        } 
    }
    //obtener el resultado
    printf("El resultado de la misma cantidad de digitos es %d:%d\n", referencia, contador);//aumentado la referencia y el contador

    return 0;
}
