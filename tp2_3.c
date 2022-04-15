#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

int main() {
    srand(time(0));
    int i,j;
    int mt[N][M];
    int *punt;

    punt = (int *) mt;

    for(i = 0; i < N; i++) {
        
        for(j = 0; j < M; j++) {
            *punt = 1 + rand() % 100;
            printf("%d  ", *punt);
            punt++;
        }
        printf("\n");
    }

    return 0;
}