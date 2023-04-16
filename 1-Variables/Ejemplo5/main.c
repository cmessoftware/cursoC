#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 300;
    float b = 12.4;
    char c = 'H';  //Es el ASCII 72 que equivale al SIMBOLO '6'.
    short int d = 123;
    //d = 999999999;
    //c = a;

    //char -> 0 al 255
    int r = a%256;
    
    char e = 64; //

    printf("%d\n",a);
    printf("%.2f\n",b);
    printf("%d\n",c);
    printf("%c\n",c);
    

}
