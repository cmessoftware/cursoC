#include <stdio.h>

int main(void) {

  // Bucles anidados.
  int N = 5, M = 2;
  int suma = 0, acum = 0;
  int i, j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      suma += j + i;
      acum += suma;
      printf("%d\n", acum);
    }
  }

  return 0;
}

//0 1 2 4 6 9 12 16 20 25