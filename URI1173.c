#include <stdio.h>

int main () {
    int x[10], *px = x, i = 0, aux = 0;

    do {
      scanf("%i", px);
    }while(*px > 50);

    printf("X[%i] = %i\n", i, *px);

    for(i = 1; i < 10; i++) {
      aux = (*px) + (*px);
      px++;
      *px = aux;
      printf("X[%i] = %i\n", i, *px);
    }

    return 0;
}
