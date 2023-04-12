#include <stdio.h>
// Define una constante.
// N Es el tamaño del vector.
#define N 5
#define F 20

int main(void) {

  // Definimos y asignamos un vector de 5 elementos tipo int.
  int v1[5] = {3, 5, -2, 10, 5};
  int suma = 0;
  int valor = 0;

  // Muestro los elementos del vector
  printf("%d\n", v1[0]); // Muestro 3
  printf("%d\n", v1[1]); // Muestro 5
  printf("%d\n", v1[2]); // Muestro -2
  printf("%d\n", v1[3]); // Muestro 10
  printf("%d\n", v1[4]); // Muestro 5

  puts("***************************************\n");
  // Recorro y muesto sus elementos.
  for (int i = 0; i < N; i++) {
    printf("v1[%d] : %d\n", i, v1[i]);
  }

  // Suma de todos los elementos del vector

  for (int i = 0; i < N; i++) {
    suma += v1[i];
  }

  puts("***************************************\n");
  printf("Suma : %d\n", suma);

  // Serie numerica de el doble.

  for (int i = 0; i < N; i++) {
    valor = 2 * v1[i];
    printf("Doble : %d\n", valor);
  }

  puts("***************************************\n");

  // 1- Mostrar los primero 20 elementos de la serie de Finobacci.
  //  F[n] = F[n-1] + F[n-2]
  // F[0] = F[1] = 1
  // F[2] = 1 + 1 = 2
  // F[3] = 2 + 1 = 3
  // F[4] = 3 + 2 = 5
  // F[5] = 5 + 3 = 8
  // F[6] = 13
  // F[7] = 21
  // F[8] = 21 + 13 = 34

  int f[20];
  f[0] = f[1] = 1;

  for (int n = 2; n < F; n++) {
    f[n] = f[n - 1] + f[n - 2];
  }

  // Muestro los valores
  for (int n = 0; n < F; n++) {
    printf("f[%d] : %d \n", n, f[n]);
  }

  // Mostra la razón entre F[n+1] y F[n]
  for (int n = 0; n < F; n++) {
    printf("f[%d]/f[%d]  : %.10f \n", n + 1, n, (float)f[n + 1] / (float)f[n]);
  }
  /*
  // Conversiones (cast) - casteo.
  float a = (float)10 / (float)4;
  printf("%.2f", a);
  */
  //2- Calcular el menor numeros de una lista ingresada.
  
  //3- Calcular la varianza de una lista. v = SUM(1 a N)(n^2)/N
    
  //4- Se tiene una lista de edades (un vector precargado) 
    //Determinar rangos
    // "Bebes": 0 y 3 años
    // "Chicos": 4 y 9 años
    // "Preadolescentes": 10 y 12 años
    // "Adolescentes": 13 y 18 años
    // "Adultos" : 19 y 65;
    // "Adultos mayores": > 65
    
  //Validar que no sea menor que 0 --> "Edad incorrecta"
  //Validar que no sea mayor a 150 ---> "Edad incorrecta"
  //5- Dado un vector de enteros, mostrar el vector desde el ultimo al primero.
  //6- Dado un vector de enteros de una cantidad par de elementos, armar dos vectores, 1/2 y 1/2
  //7- Dado un vector de enteros de una cantidad divisible por 3, armar dos vectores, 1/3 , 1/3, y 1/3

  return 0;
}