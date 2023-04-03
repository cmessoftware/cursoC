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

  //Determinar si un numero está entre 10 y 12
  int num = 12;

  //Modo largo

  if(num >12)
  {
    printf("NO está en el rango");
  }
  else if(num <= 12)
  {
    if(num >= 10)
    {
       printf("Está en el rango");
    }
    else
    {
      printf("NO está en el rango");
    }
  }

  return 0;
}


