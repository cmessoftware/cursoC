#include <stdio.h>


int main(void)
{

  //Operadores lógicos (Verdadero o Falso,true o false)
  //AND  &&
  //OR   ||

  /*
    AND
    x    y   (x && y)
    ------------------
    V    V      V
    V    F      F
    F    V      F
    F    F      F

   OR
    x    y   (x || y)
    ------------------
    V    V      V
    V    F      V
    F    V      V
    F    F      F
  
  */

  //Determinar si un numero está entre 10 y 20
  int num = 30;

  //Modo largo

  if(num >20)
  {
    printf("Está por encima del rango");
  }
  else if(num <= 20)
  {
    if(num >= 10)
    {
       printf("Está en el rango");
    }
    else
    {
      printf("Está en por debajo del rango");
    }
  }

  return 0;
}


