#include <stdio.h>
#include <string.h>
// Define una constante.
// N Es el tamaño del vector.
#define N 9
#define F 20
#define E 7


//Funciones
// Estructura de funcion: 
//tipo devuelto NombreFuncion (tipo1,tipo2,.....tipon) { cuerpo de la funcion }
//Declarar la funcion.

//int menor(int[] vector);

int numeroMenor(int vector[])
{
  int resultado = 9999999;

  for(int i=0 ; i < N; i++)
  {
    if(vector[i] < resultado)
      resultado = vector[i];
  }

  return resultado;
}

int numeroMayor(int vector[])
{
  int resultado = -9999999;

  for(int i=0 ; i < N; i++)
  {
    if(vector[i] > resultado)
      resultado = vector[i];
  }

  return resultado;
}

float varianza(vector[])
{
  float resultado = 0;

  for(int n=1 ; n <= N; n++)
  {
    resultado += (float)(n^2)/(float)N;
  }

  return resultado;
  
}

//4- Se tiene una lista de edades (un vector precargado) 
//Determinar rangos
// "Bebes": 0 y 3 años
// "Chicos": 4 y 9 años
// "Preadolescentes": 10 y 12 años
// "Adolescentes": 13 y 18 años
// "Adultos" : 19 y 65;
// "Adultos mayores": > 65
void edadPersona(int edades[])
{
  for(int i=0 ; i < E; i++)
  {
    int edad = edades[i];

    if(edad < 0 || edad > 150)
      printf("Edad incorrecta\n");
    
    if(edad >= 0 && edad <=3){
      printf("Bebes\n");
    }
    if(edad >= 4 && edad <=9){
      printf("Chicos\n");
    }
    if(edad >= 10 && edad <=12){
      printf("Preadolescentes\n");
    }
    if(edad >= 13 && edad <=18){
      printf("Adolescentes\n");
    }
    if(edad >= 19 && edad <=65){
      printf("Adultos\n");
    }
    if(edad > 65){
      printf("Adultos mayores\n");
    }
  }
}

//5- Dado un vector de enteros, mostrar el vector desde el ultimo al primero.
void reversa(int vector[])
{
  int resultado[N];

  for(int i=N-1,j=0; i >= 0,j < N; i--,j++)
  {
    resultado[j] = vector[i]; //Al principio apunta al ultimo elemento
    printf("%d\t",resultado[j]);
  }

  /*for(int i=N-,j=0; i >= 0, j < N; i--,j++)
  {
    resultado[j] = vector[i]; //Al principio apunta al ultimo elemento
  }
  */

  for(int i=0; i < 0; i++)
  {
    printf("%d\t",resultado[i]); 
  }
 
}

//HOLA -> 'H','O','L','A','\0'
void mostrarCadena(char cadena[])
{
   for(int i=0; i < N; i++)
  {
    printf("%c\t",cadena[i]); 
  }
}

int main(void) {

  int vector[N] = {0,76,4,6,-7,3,10,12,-2};
  //2- Calcular el menor numeros de una lista ingresada.

  int menor = numeroMenor(vector);
  printf("El menor numero del vector es: %d\n",menor);

  int mayor = numeroMayor(vector);
  printf("El mayor numero del vector es: %d\n",mayor);
  
  //3- Calcular la varianza de una lista. v = SUM(1 a N)(n^2)/N

  int edades[N] = {0,76,-5,10,17,33,170};
  edadPersona(edades);

  reversa(vector);

  char cadena[5] = {'H','O','L','A'};
  mostrarCadena(cadena);
  //Trato de imprimir cadena con un printf.
  cadena[5] = '\0';
  printf("\n%s\t%d",cadena,strlen(cadena));

  //6- Dado un vector de enteros de una cantidad par de elementos, armar dos vectores, 1/2 y 1/2
  //7- Dado un vector de enteros de una cantidad divisible por 3, armar dos vectores, 1/3 , 1/3, y 1/3
  //8- Concatenar dos cadenas de caracters y mostrarlas con printf
  //strcat --> Concatena
  //strlen --> Muestra logngitud de la cadena
  //strcpy --> copia una cadena en otra.
  //strncpy --> copia hasta el, n-esimo indice (Verificar)
  //strcmp --> compara
  //strncmp --> compara  hasta el n-enesimo indice.
  //strtok --> Divide la cadena en n cadenas segun un sepador Ej: Hola, Mundo -> 'Hola' 'Mundo'
  //https://es.wikipedia.org/wiki/String.h

  
  return 0;
}


