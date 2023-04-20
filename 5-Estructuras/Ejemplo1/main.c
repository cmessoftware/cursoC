#include <stdio.h>
#include <string.h>

//Ejemplos de creacion y uso de estructuras.
//vectores de estructuras.
/*Estructuras
  Es un tipo de estructura de datos que permite manejar en forma conjunta datos asociados.
  Esos datos pueden ser variables de diferente tipos, incluso otras estructuras
  (estructura anidada)

Entidad Persona
- Nombre
- Apellido
- Edad
- DNI
*/


int main(void) {

  struct Domicilio
  {
    char ciudad[25];
    char calle[15]; 
    int numero;
    char cp[10];
  };

  //Declaramos el TIPO struct Persona
  struct Persona
  {
    char nombre[15];
    char apellido[15]; 
    int edad;
    char dni[10];
    struct Domicilio domicilio;//Estructura anidada
  };

  /*
    1- Completar carga y muestra en formato de tabla para Pesona con domicilio
    2- Considerar que Persona puede tener mas de un domicilio
       arga y muestra en formato de tabla para Pesona con mas de un domicilio
  */

    
  //Creo variables del tipo struct Persona

  struct Persona varEstudiante;

  //int vectorEnteros[50]
  struct Persona estudiantes[10];
 
  //Cargo 1 estudiante
  // puts("Nombre: ");
  // scanf("%s", varEstudiante.nombre);
   

  //  scanf
  //  Si cargo un numerico (long, float, int, unsigned, char) --> VA el &
  //  Si cargo un cadena de caracteres (char[]) --> VAR SIN &

  //Cargo los estudiantes
  
  for(int i=0 ; i < 3; i++)
  {
    puts("Nombre: ");
    scanf("%s", estudiantes[i].nombre);
    //strcpy(varEstudiante.nombre,"Agustin");

    puts("Apellido: ");
    scanf("%s", estudiantes[i].apellido);
    //strcpy(varEstudiante.apellido,"Serra");

    puts("Edad: ");
    scanf("%d", &estudiantes[i].edad);
    //varEstudiante.edad = 19;

    puts("DNI: ");
    scanf("%s",estudiantes[i].dni);
    //strcpy(varEstudiante.dni,"45909098");

    puts("Ciudad: ");
    scanf("%s",estudiantes[i].domicilio.ciudad);
  }

  puts("Nombre         Apellido       Edad  DNI      Ciudad");
  for(int i=0 ; i < 3; i++)
  {
    printf("%s\t",estudiantes[i].nombre);
    printf("%s\t",estudiantes[i].apellido);
    printf("%d\t",estudiantes[i].edad);
    printf("%s\t",estudiantes[i].dni);
    printf("%s\t",estudiantes[i].domicilio.ciudad);
    printf("\n-----------------------------------------\n");
  }

  return 0;
}

