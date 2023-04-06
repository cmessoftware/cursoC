#include <stdio.h>

int main(void) {

  // Calcula el promedio de N numeos ingresado por el usuario.

  int N = 5;
  float acum = 0;
  float num = 0;
  float prom = 0;
  int i;

  for(i = 0; i < N;i++)
  {
    printf("Ingrese un numeros: ");
    scanf("%f",&num);
    acum += num;
  }

  printf("%.4f\n",acum);

  prom = acum/N;

  printf("%.4f\n",prom);
  

  
  return 0;
}