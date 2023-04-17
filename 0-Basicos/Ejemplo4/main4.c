#include <stdio.h>


int main(void)
{

  //Determinar si X tiene entre 18 y 40 años y además es arquitecto (requerido).
    
  
  int num =25;  //Edad
  int esArquitecto = 0;   //Si es 0 es FALSE Sino TRUE.

  //Modo corto

  if(num >= 18 && num <= 40 && esArquitecto)
  {  
    printf("Cumple condicion\n");
  }
  else  //Esta fuera del rango.
  {
    printf("No cumple condicion\n");
  }


  //Determinar si X tiene entre 28 y 50 años o es arquitecto (condiciones deseables).
  
  if( (num >= 28 && num <= 50) || esArquitecto)
  {
    printf("Cumple condicion\n");
  }
  else  //Esta fuera del rango.
  {
    printf("No cumple condicion\n");
  }
  
  return 0;
}


