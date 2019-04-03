#include <stdio.h>
#include <stdlib.h>
#include "fnKit.h"
#define CANT 5

int main()
{
    int vec[10]={7,5,6,2,8,1,3,9,11,12};
    int i;
    /*
    for(i=0;i<CANT-1;i++)
    {
        for(j=i+1;j<CANT;j++)
        {
            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
    for(i=0;i<CANT;i++)
    {
        printf("%d ",vec[i]);
    }
    */
    fnOrdAscendente(vec,10);
    for(i=0;i<10
    ;i++)
    {
        printf("%d ",vec[i]);
    }

    return 0;
}
