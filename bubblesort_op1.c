#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){
    int i,j,aux=0;
    int n=atoi(argv[1]);
    int array[n];
    for(int i=1; i<=n;i++){
        scanf("%d",&array[i]);
        //printf("%d\n",array[i]);
    }
    if(arg!=2){
        printf("ingresa una n\n");
        exit(1);
    }
    //burbuja optimizada 1
    for(i=0;i<n;i++){
        for(j=0;j<(n)-i;j++){
            if(array[j]>array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
    for(i=0;i<=n;i++){
    printf("el numero de la posicion %d es %d\n",i,array[i]);
    }
    return 0;
}