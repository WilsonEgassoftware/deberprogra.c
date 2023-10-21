#include <stdio.h>
int main (){ //Inicializamos las varibles que usaremos , como almancenar los 10 numeros
    int numero; 
    int suma=0; 
    int promedio=0;
    int contador; // contador de las veces que repita
    int numeros [10];//Almacenar lo numeros
    int n=10;

    printf("Ingrese 10 numero enteros:");

   for (int i = 0;  i < n; i++ ){
     scanf("%d",&numero);
     suma = numeros[i];

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
    printf("El resultado entero de los numeros es:%d\n", promedio);
    printf("El resultado del promedio del vector es:%d\n",contador);

    return 0;
}
