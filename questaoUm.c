#include <stdio.h>
#include <math.h>
int eh_primo(int vez){
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
    printf(numero<=1?"A entrada não é primo\n":eh_primo(numero)?"A entrada é primo\n":"A entrada não é primo\n");
    return 0;
}
