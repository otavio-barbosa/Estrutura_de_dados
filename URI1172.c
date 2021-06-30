#include <stdio.h>

int main () {
    int x[10], *px = x, i;

    for(i=0;i<10;i++)
    {
        scanf("%i", px);
        if(*px <= 0)
            *px = 1;
        px++;
    }

    px = x;

    for(i=0;i<10;i++)
    {
        printf("X[%i]= %i\n", i + 1, *px);
        px++;
    }

    return 0;
}
