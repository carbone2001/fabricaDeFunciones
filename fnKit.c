#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

int getInt(char * msj) //TERMINAR
{
    int aux;
    printf("%s",msj);
    scanf("%d",&aux);

    return aux;
}

void fnOrdAscendente(int * nombreVector, int sizeVector)
{
    int i;
    int j;
    int aux;
    int vector[sizeVector];
    for(i=0;i<sizeVector;i++)
    {
        vector[i]=nombreVector[i];
    }
    for(i=0;i<sizeVector-1;i++)
    {
        for(j=i+1;j<sizeVector;j++)
        {
            if(vector[i]>vector[j])
            {
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }
    for(i=0;i<sizeVector;i++)
    {
        nombreVector[i]=vector[i];
    }
}

void fnOrdDescendente(int * nombreVector, int sizeVector)
{
    int i;
    int j;
    int aux;
    int vector[sizeVector];
    for(i=0;i<sizeVector;i++)
    {
        vector[i]=nombreVector[i];
    }
    for(i=0;i<sizeVector-1;i++)
    {
        for(j=i+1;j<sizeVector;j++)
        {
            if(vector[i]<vector[j])
            {
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
        }
    }
    for(i=0;i<sizeVector;i++)
    {
        nombreVector[i]=vector[i];
    }
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
void fnOrdIncertion(int * vector,int lenght)
{
    int i;
    int j;
    int aux;
    for(i=1;i<lenght;i++)
    {
        aux=vector[i];
        j=i-1;
        while(aux<vector[j]&&j>=0)
        {
            vector[j+1]=vector[j];
            j--;
        }
        vector[j+1]=aux;
    }
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

