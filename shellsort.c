#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tiempo.h"
//#define TRUE 1
//#define FALSE 0

int main(int arg, char *argv[]){
    
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
    int i,k=0,b=0,temp=0;
    int n=atoi(argv[1]);
    int array[n];
    //Iniciar el conteo del tiempo para las evaluaciones de rendimiento
    uswtime(&utime0, &stime0, &wtime0);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }    
    if(arg!=2){
        printf("ingresa una n");
        exit(1);
    }
    
    k=trunc(n/2);
    while(k>=1){
        b=1;
        while(b!=0){
            b=0;
            for(i=k;i<=n;i++){
                if(array[i-k]>array[i]){
                    temp=array[i];
                    array[i]=array[i-k];
                    array[i-k]=temp;
                    b=b+1;
                }
            }
        }
        k=trunc(k/2);
    }
     for(i=1;i<=n;i++){
    printf("el numero de la posicion %d es %d\n",i,array[i]);
    }

//Evaluar los tiempos de ejecución 
	//******************************************************************
	uswtime(&utime1, &stime1, &wtime1);
	
	//Cálculo del tiempo de ejecución del programa
	printf("\n");
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	
	//Mostrar los tiempos en formato exponecial
	printf("\n");
	printf("real (Tiempo total)  %.10e s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10e s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10e s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	//******************************************************************
    
    //Evaluar los tiempos de ejecución
    uswtime(&utime1, &stime1, &wtime1);
	//Terminar programa normalmente	
    return (0);	
    //return 0;
}