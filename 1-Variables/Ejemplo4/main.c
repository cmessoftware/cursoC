//Cabecera --> incluir referencia externas.
#include <stdio.h>

void main(void)
{

    int num1 = 0;
    int num2 = 0;
    printf("Ingrese un numero\n");
    scanf("%d",&num1);
    printf("Ingrese otro numero\n");
    scanf("%d",&num2);

    //SECUENCIA
    //DESICION
    //ITERACION

    if(num1 == num2)
    {
        printf("%d es igual que %d\n",num2,num1);
    }

    if(num1 > num2) //SI pasa la condicion hacer...
    {
        printf("%d es mayor que %d\n",num1,num2);
    }
    else if(num1 < num2)
    {
         printf("%d es mayor que %d\n",num2,num1);
    }
    
    // if(num1 > num2) //SI pasa la condicion hacer...
    // {
    //     printf("%d es mayor que %d\n",num1,num2);
    // }
    // else if(num1 < num2)//SINO
    // {
    //      printf("%d es mayor que %d\n",num2,num1);
    // }
    // else 
    // {
    //     printf("%d es igual que %d\n",num2,num1);
    // }
}
