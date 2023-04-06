#include <stdio.h>

int main(void) {
  // Suma lo primero N numeros enteros.
  // Usando for
  int N = 100;
  int suma = 0;
  int i;

  for (i = 200; i <= N; i++) {
    suma = suma + i;
  }

  printf("%d\n", suma);

  // Suma lo primero N numeros enteros.
  // Usando while
  // La condiciones se evalua primero.

  i = 200;
  suma = 0;
  while (i <= N) {
    suma = suma + i;
    i++;
  }

  printf("%d\n", suma);

  // Suma lo primero N numeros enteros.
  // Usando do while
  // La condiciones se evalua por primer vez
  // luego de ejecutar una vez el bloque de codigo

  suma = 0;
  i = 200;
  do {
    suma = suma + i;
    i++;

  } while (i <= N);

  printf("%d\n", suma);

  return 0;
}