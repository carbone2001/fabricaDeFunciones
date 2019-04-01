#include <stdio.h>
#include <stdlib.h>
#include "fnKit.h"

int main()
{
    int x;
    x=560;
    getInt(&x,"Ingrese numero ","Reintentalo ",10,100,0);

    printf("El valor de X es %d",x);



    return 0;
}
