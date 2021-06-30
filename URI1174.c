#include <stdio.h>

int main(){

    float x[100],*px = x;
    int i;

    for(i=0;i<100;i++)
    {
        scanf("%f",px);
        px++;
    }

    px-=100;

    for(i=0;i<100;i++)
    {
        if(*px<=10)
        printf("A[%i]=%.1f\n", i,*px);
    px++;
    }

    return 0;
}
