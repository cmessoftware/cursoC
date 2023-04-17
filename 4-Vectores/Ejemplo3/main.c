#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define TAM 12

//6- Dado un vector de enteros de una cantidad par de elementos, armar dos vectores, 1/2 y 1/2
void divido2 ( int v1[], int N)
{
    if ( N % 2 != 0)
    {
        puts(" incorrecto");
    }
     int v2[N/2];// se copia la 1° parte
     int v3[N/2];// se copia la 2° parte
     int j = 0;
     for (int i=0; i < N; i++ ){
         if ( i < N / 2 ){
             v2[i] = v1[i];
         }
         else {
             v3[j] = v1[i];
             j++;
         }
     } 
     // muestro los vectores (quedo mal)
      for ( int i = 0; i < N/2; i++ ){
         printf("%d , ", v2[i]);
      }

        puts("\n*******\n");
    
      for ( int i = 0; i < N/2; i++ ){
         printf("%d , ", v3[i]);
      }
    
         puts("\n");
} 

int main() {
  
    int vector[TAM] = {0,4,6,8,10,12,14,16,18,20,22,24}; 
   
    divido2 (vector , TAM);
   
    return 0;
}