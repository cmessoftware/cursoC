#include <stdio.h>

//La variables permiten definir y acceder a la memoria.
//Hay diferentes tipo de variables clasificadas por "tipo" dependiente de su uso.
/*
Para definir:

- Entero: el tipo se llama int -> rango -2^(32-1) a 2^(32-1)
                            unsingned int -> 0 a 2^32
                            short -> 8 bits
                            long -> -2^(64-1) a 2^(64-1)
                            unsingned int -> 0 a 2^64
                            float -> numeros decimales.
- Caracteres:  char -> 8 bits -> representa UN solo caracter ASCII 0 al 255 (8 bits)
- Nada -> void
*/
int main(void)
{
  /*Definir variables
  tipo nombre;
  Asignar un valor
  nombre = valor;
  definir y asignar
  tipo nombre = valor

   Si no asignas nada el valor por defecto depende del tipo
   Si es tipo numero se carga basura.
   Si es tipo se carga vacio (0)*/

   int a = 0;
   int b = -45;
   unsigned int c = 44;
   char chr = 'D';
   char chrAscii = 60;
   float f = 33.2; //Numero decimal.
   
   //Como muestro por pantalla estas variables?
   //printf("%<abreviatura del tipo>",variable);
   //int -> "%d"
   //long -> "%ld"
   //char -> "%c"
   //cadena de caracteres (concatenacion de chars) -> "%s"
   //float -> "%f", si queres mostrar n digitos decimales -> "%.<n>f" -> dos decimales "%.2f"

   printf("%d\n",a);
   printf("%c\n",a);
   printf("%f\n",a);
   printf("%.4f\n",a);

   printf("*************************\n");

   printf("%d\n",b);
   printf("%c\n",b);
   printf("%f\n",b);
   printf("%.4f\n",b);

   

   return 0;
}


  
