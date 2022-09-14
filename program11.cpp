#include<stdio.h>
int main()
{

    int HH,MM;
     scanf("%d%d",&HH,&MM);
     if(HH>0)
        if(MM<60)
        printf(" \"%d Hour and %d Minute",HH,MM);
    return 0;


}

