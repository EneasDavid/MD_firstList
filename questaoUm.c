#include <stdio.h>
int eh_primo(int vez){
    for(int i=2;i<vez;i++){
        if(!(vez%i)){
             return 0;
        }
    }
    return 1;
}

int main(){
    int numero, eh_primo=0;
    scanf("%d", &numero);
    printf(eh_primo(numero)?"A entrada é primo\n":"A entrada não é primo\n");
    return 0;
}