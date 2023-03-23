#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    int i;
    double vt[N];
    double *p;
    
    p=vt;
    
    int rand();
    for(i = 0;i<N; i++)
    {
        srand(time(NULL));
        *p=1+rand()%100;
        printf("%.2f ", *p);
        p++;
    }

return 0;
}