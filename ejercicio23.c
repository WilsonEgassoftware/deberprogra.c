#include <stdio.h>
int main(){
    int numero[10]; //declarar el tamaño 10 para almacenar los números
    int i,j, duplicado = 0; //varibles de control para dectectar duplicados
   //solicitar el ingreso e los 10 numeros
   printf("Ingrese 10 numeros enteros:");

   for (int i = 0;  i<10 ; i++ ){
      printf("Numero %d:", i, 1);
      scanf("%d",&numero[i]);
   }

   //verificamos los datos 
   for(int i= 0; i < 9; i++){
    for(j = i + 1; j < 10; j++){
        if (numero[i == numeros[j]]){
            duplicado = 1; // si se encuentra un duplicado establecer el flag
            break; 
        }
    }
    if (duplicado){
        break;// salir de bucle si se encuentra un repetitivo
    }
    
   }
   //mostrar el resultado
   if (duplicado){
    printf("El valor que se repite del vector es:");
   }else{
    printf("No existe una repeticion de los valores");
   }
  return 0;
}