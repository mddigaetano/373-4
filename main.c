//Author: amedeo39

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void EnumerationSort(int v[],int n,int NewV[]){
    int max=v[0],min=v[0],i,j,c;
    
    for(i=1;i<n;i++){
        if(v[i]>max)
            max=v[i];
        else if(v[i]<min)
            min=v[i];
    }
    
    j=min;
    
    for(i=0;i<n;){
        for(;j<=max;j++){
            for(c=0;c<n;c++){
                if(j==v[c]){
                    NewV[i]=v[c];
                    i++;
                }
            }
        }
    }
}

int main(int argc, char** argv) {
    int Vsorted[N];
    int i,v[N];
    
    srand(time(NULL));
    
    for(i=0;i<N;i++){
        v[i]=(rand()%100)+1;
        printf("Vettore [%d]: %d\n",i,v[i]);
    }
    
    EnumerationSort(v,N,Vsorted);
    
    for(i=0;i<N;i++){
        printf("\nVettore ordinato [%d]: %d",i,Vsorted[i]);
    }

    return (EXIT_SUCCESS);
}

