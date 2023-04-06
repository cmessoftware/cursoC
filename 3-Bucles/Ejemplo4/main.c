#include <stdio.h>

int main(void) {

  int num = 0;
  int max = -999999999;
  int N = 5;

  //1-Calcular el maximo de una lista de numeros.
  for (int i = 0; i < N; i++) {
    printf("Ingrese un numeros: ");
    scanf("%d", &num);
    if (num > max) {
      max = num;
    }
  }

  printf("%d\n", max);

//2- Calcular el menor numeros de una lista ingresada.
  
//3- Calcular la varianza de una lista. v = SUM(1 a N)(n^2)/N
  
//4- Se tiene una lista de edades (ingresada por teclado) 
  //Determinar rangos
  // "Bebes": 0 y 3 años
  // "Chicos": 4 y 9 años
  // "Preadolescentes": 10 y 12 años
  // "Adolescentes": 13 y 18 años
  // "Adultos" : 19 y 65;
  // "Adultos mayores": > 65
  
//Validar que no sea menor que 0 --> "Edad incorrecta"
//Validar que no sea mayor a 150 ---> "Edad incorrecta"
  
  
  return 0;
}

// 0 1 2 4 6 9 12 16 20 25