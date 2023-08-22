#include <stdio.h>
#include <math.h>
int eh_primo(int vez){
    if(vez<2){
         return 0;      
    }
    for(int i=2;i<=sqrt(vez);i++){
        if(!(vez%i)){
             return 0;
        }
    }
    return 1;
}

int main(){
    int numero;
    scanf("%d", &numero);
    printf(eh_primo(numero)?"A entrada é primo\n":"A entrada não é primo\n");
    return 0;
}
