#include <stdio.h>
int main (){ //Inicializamos las varibles que usaremos , como almancenar los 10 numeros
    int numero; 
    int suma=0; 
    int promedio=0;
    int contador; // contador de las veces que repita
    int numeros [10];//Almacenar lo numeros
    int n=10;// cantidad de numeros que vamos a leer
     //pedimos el ingreso de  los datos 
    printf("Ingrese 10 numero enteros:");
    //creamos un ciclo hasta 10 para que sea almacenen los datos 
   for (int i = 0;  i < n; i++ ){
     scanf("%d",&numero);
     suma = numeros[i];//realizar el procedmiento para poder encontrar el promedio

   }
   // calcular al promedio
    promedio=suma/n;

   // contar cuantas veces se repite el promedio
    for ( int i =0; i < n ; i++){
        if (numeros[i] == promedio){
            contador++;
        }
    }
    // mostrar las respuestas
    printf("El resultado entero de los numeros es:%d\n", promedio);//obtenemos los datos del promedio
    printf("El resultado del promedio del vector es:%d\n",contador);// obtenemos los datos del vector

    return 0;
}
