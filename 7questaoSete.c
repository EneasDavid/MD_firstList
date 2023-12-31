#include <stdio.h>
#include <math.h>
int eh_primo(int entrada) {
    if (entrada == 2) {
        return 1;
    }
    if (entrada < 2 || entrada % 2 == 0) {
        return 0;
    }
    for (int i = 2; i <= sqrt(entrada); i += 2) {
        if (entrada % i == 0) {
            return 0;
        }
    }
    return 1;
}
int inversomod(int a,int b,int x){
    if(!(eh_primo(a) && eh_primo(b))){
        printf("NAO EXISTE\n");
    }else{
        if((a*x)%b==1){
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