#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int arg, char *argv[]){
    int i,k=0,b=0,temp=0;
    int n=atoi(argv[1]);
    int array[n];
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

    return 0;



}