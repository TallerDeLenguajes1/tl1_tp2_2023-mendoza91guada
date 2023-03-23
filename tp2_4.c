#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef PC;

int main()
{
PC compu1;
// NO ES ESTA LA FORMA EN QUE ME PIDEN EL EJERCICIO //
srand(time(NULL));
compu1.velocidad=rand()%4+1;
printf("----Computadora1----\n");
printf("La velocidad es %d GHz. \n", compu1.velocidad);

return 0;
}