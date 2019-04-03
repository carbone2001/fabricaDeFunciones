#include <stdio.h>
#include <stdlib.h>
int ffactorial(int x)
{
    int i;
    int fact;
    fact=x;

    if(x<0)
    {
        fact=(-1);
    }
    else if(x==0)
    {
        fact=1;
    }
    else
    {
        int i;
        int fact;
        fact=x;
        for(i=1;i<x;i++)
        {
            fact=fact*i;
        }
    }

    for(i=1;i<x;i++)
    {
        fact=fact*i;
    }

    return fact;
}
/** \brief Verifica el dato de una variable declarada en la funcion que la llama. Intentos configurables
 *
 * \param
 * \param
 * \return
 *
 */

int getIntIntentos(int* input,char* msj,char* eMsj,int minimo,int maximo,int reintentos)
{
    int i;
    int error;
    error=0;
    int num;
    num=*input;
    printf("%s",msj);
    scanf("%d",&num);
    if(num<minimo||num>maximo)
    {
        if(reintentos)
        {
            for(i=0;i<reintentos;i++)
            {
                printf("%s",eMsj);
                scanf("%d",&num);
                if(num>=minimo&&num<=maximo)
                {
                    *input=num;
                    error=0;
                    break;
                }
                else
                {

                    error=1;
                }
            }

        }
        else
        {
            while(num<minimo||num>maximo)
            {
                printf("%s",eMsj);
                scanf("%d",&num);
            }
            *input=num;

        }
    }
    else
    {
        *input=num;
    }
    return error;
}

int getInt(int*input,char*msj,char*eMsj,int minimo,int maximo) //TERMINAR
{
    return 0;
}
