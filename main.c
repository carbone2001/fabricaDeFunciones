#include <stdio.h>
#include <stdlib.h>
#include "fnKit.h"

int main()
{
    int x=100;
    int r;
    printf("El valor de X antes de funcion es %d\n",x);

    r=getIntIntentos(&x,"Ingrese UN NUMERO ENTRE 23 Y 87 ","nUMERO INGRESADO INCORRECTO ",23,87,0);
    if(r)
    {
        printf("No pudo realizarse la operacion");
    }
    else
    {
        printf("El valor de X es %d",x);
    }
    return 0;
}
