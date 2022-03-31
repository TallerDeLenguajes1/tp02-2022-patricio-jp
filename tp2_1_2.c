#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main() {
    srand(time(0));
    int i;
    double vt[N];
    double *punt = vt;
    
    for(i = 0; i<N; i++) {
        *(punt + i) = 1 + rand() % 100;
        printf("%f ", *(punt + i));
    }

    return 0;
}