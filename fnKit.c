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

void getInt(int* input,char* msj,char* eMsj,int minimo,int maximo,int reintentos)
{
    int i;
    int num;
    num=*input;
    printf("%s",msj);
    fflush(stdin);
    scanf("%d",input);
    if(num<minimo||num>maximo)
    {
        if(reintentos==0)
        {
            while(num<minimo||num>maximo)
            {
                printf("%s",eMsj);
                scanf("%d",&num);
            }
        }
        else
        {
            while((num<minimo||num>maximo)&&i<reintentos)
            {
                printf("%s",eMsj);
                scanf("%d",&num);
                i++;
            }
        }


    }
}
