#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int a, int b){
    int maior,menor,rest;
    maior = a;
    menor = b;
    if(a<b){
        maior=b;
        menor=a;
    }
    rest=(maior%menor);
    
    if(rest==0){
        return menor;
    }else{
        return mdc(menor,(rest));
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("MDC(%d,%d) = %d\n",a,b,mdc(a,b));
    return 0;
}