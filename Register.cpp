#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char* argv[]){

    if(argc != 2){
        printf("Forma de uso %s    Valor Long: \n", argv[0]);
        return -1;
    }
    long max = atol(argv[1]);

    //CALCULAR TIEMPO DE EJECUCIÓN
    clock_t t= clock();
    printf("Inicio\n");

    int n=0;
    for(n=0; n<max; n++);

    printf("Fin\n");
    t = clock() - t;
    double tiempo = ((double)t) / CLOCKS_PER_SEC;
    printf("Tiempo transcurrido %f segundos\n", tiempo);
    return 0;
}
