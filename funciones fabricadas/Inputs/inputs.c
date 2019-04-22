#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "inputs.h"
int getIntIntentos(int* input,char* msj,char* eMsj,int minimo,int maximo,int reintentos)
{
    int i;
    int error;
    int num;
    error=0;
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

int getInt(char * msj) //TERMINAR
{
    int aux;
    printf("%s",msj);
    scanf("%d",&aux);

    return aux;
}
void getIntPlus(int*input,char*msj,char*eMsj,int minimo,int maximo) //TERMINAR
{
    int aux;
    printf("%s",msj);
    scanf("%d",input);
    while(aux>maximo || aux<minimo)
    {
        printf("%s",eMsj);
        scanf("%d",input);
    }
    return aux;
}
int getRandom(int primerNumero, int ultimoNumero,int primeraVez)
{
    if(primeraVez)
    {
        srand(time(NULL));
    }
    int random;
    random=primerNumero+(rand()%((ultimoNumero+1)-primerNumero));
    return random;
}
int getChar(char*msj,char letraCorrecta)
{
    int confirmacion;
    char letraEntrada;
    confirmacion=0;
    printf("%s",msj);
    scanf("%c",&letraEntrada);

    if(letraEntrada==letraCorrecta)
    {
        confirmacion=1;
    }
    return confirmacion;
}
void getFloatPlus(float*input,char*msj,char*eMsj,float minimo,float maximo) //TERMINAR
{
    float aux;
    printf("%s",msj);
    scanf("%f",input);
    while(aux>maximo || aux<minimo)
    {
        printf("%s",eMsj);
        scanf("%f",input);
    }
    return aux;
}
int getString(char str[],int limite)
{
    int error;
    error=0;
    gets(str);
    if(strlen(str)>limite)
    {
        error=1;
    }
    return error;
}
