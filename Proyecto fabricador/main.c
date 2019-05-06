#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fnKit.h"
#include <time.h>
#define CANT 5

//int getChar(char *car,char msj[],char eMsj[]);
int getCuil(char *cuit,int guion);


int main()
{
    char cuil[12];
    int errores;
    //getString(cuil,"Ingrese cuil","Error. Cuil invalido.",10,0);
    errores=getCuil(cuil,1);
    printf("%s  Errores: %d",cuil,errores);

    return 0;
}
int getCuil(char cuil[],int guion)
{
    int error;
    char auxCuit[12];
    int i;
    getString(auxCuit,"Ingrese cuil","Error. Cuil invalido.",12,0);
    printf("Se ingresa auxCuit %s",auxCuit);
    for(i=0; i<=strlen(auxCuit); i++)
    {
        if(auxCuit[i]<48 || auxCuit[i]>57)
        {
            error=1;
            break;
        }
    }
    if(error==0)
    {
        if(guion==0)
        {
            if(strlen(auxCuit)!=12)
            {
                error=1;
            }
            else
            {
                strcpy(cuil,auxCuit);
            }
        }
        else
        {
            for(i=0;i<=12;i++)
            {
                if(i<2)
                {
                    cuil[i]=auxCuit[i];
                }
                if((i==2 || i==12) && cuil[i]!='-')
                {
                    cuil[i]='-';
                }
                if(i>2 && i<12)
                {
                    cuil[i]=auxCuit[i-1];
                }
                if(i>11)
                {
                  cuil[i]=auxCuit[i-2];
                }
            }
        }
    }

    return error;

}


