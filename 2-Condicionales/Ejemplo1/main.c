#include <stdio.h>

int main(void) {

  //Condicionales
  //SI NO ENTONCES
  //SI "PASA ALGO" 
  //ENTONCES "HAGO ESTO" S
  //SINO "HAGO OTRA COSA"

  //Indicar si una persona es mayor de edad
  //Validar que la edad no sea menor a 0.

  //Operadores condicionales
  //Mayor: >
  //Menor: <
  //Igual: ==
  
    
  int edad = -41 ;
  if(edad >= 21)
  {
    printf("es mayor a 21 ");
    
  }
   else if (edad >= 0 )
  {
    printf("es menor");
  }
  else 
   {
       printf("edad incorrecta");
   }
  
  return 0;
}