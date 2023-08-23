#include <stdio.h>
#include <math.h>

int eh_primo(int vez) {
    if (vez < 2) {
         return 0;      
    }
    for (int i = 3; i <= sqrt(vez); i++) {
        if (!(vez % i)) {
             return 0;
        }
    }
    return 1;
}
void decomposicao(int valorDecomposto){
    int i=2;
    while(valorDecomposto>1){
        if(eh_primo(i) && valorDecomposto%i==0){
             printf("%d", i);
             valorDecomposto/=i;
             if(valorDecomposto>1){
                 printf(" * ");
             }
        }else{
             i++;
        }
    }
}
void mdc(int um, int dois) {
    if(um>dois){
        if(um-dois>1) {
            decomposicao(um-dois);
            return;
        }
    }else if (dois>um) {
        if (dois-um>1) {
            decomposicao(dois-um);
            return;
        }
    } else {
        if (um>1) {
            decomposicao(um);
            return;
        }
    }
    
    printf("1\n");
}
mmc(int um, int dois){
    return (um*dois)/mdc(um, dois);
}
int main(){
    int entradaUm, entradaDois;
    scanf("%d%d", &entradaUm, &entradaDois);
    mdc(entradaUm,entradaDois);
    printf("MMc %d\n", mmc(entradaUm, entradaDois));
    return 0;
}