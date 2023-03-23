#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){
    int i,j, *punt;
    int mt[N][M];

    punt=&mt[0][0];
    int rand();
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            srand(time(NULL));
            *punt=1+rand()%100;
            printf("%d ", *punt);
        punt++;
    }
        printf("\n");
    }
return 0;
}