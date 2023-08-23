#include <stdio.h>
#include <math.h>

int inversomod(int a,int b,int x){
    if(x>b){
        printf("NAO EXISTE\n");
    }else{
        int rst=(a*x)%b;
        if(rst==1){
            printf("Resultado: %d\n",x);
        }else{
            return inversomod(a,b,x+1);
        }
    }
    
}

int main(){
    int a,b;
    printf("Digite a e b para calcular o inverso de a mod b:\n");
    scanf("%d %d",&a,&b);
    inversomod(a,b,0);
}