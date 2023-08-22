#include <stdio.h>

int eh_primo(int vez) {
    if (vez < 2) {
         return 0;      
    }
    for (int i = 3; i <= sqrt(vez); i+=2) {
        if (!(vez % i)) {
             return 0;
        }
    }
    return 1;
}
int decomposicao(int valorDecomposto, int i, int [] decomposicaoTotal){
    if(valorDecomposto>1){
        if(eh_primo(i)){
            if(valorDecomposto%i==0){
                decomposicaoTotal[];
                return decomposicao(valorDecomposto,i);
            }
        }
        return decomposicao(valorDecomposto,i+1);
    }
    return decomposicaoTotal;
}
int mmc(int um, int dois){
    int mmc=1,i=2;
    while(um>1 || dois>1){
        if(eh_primo(i)){
            if(um%i ==0 || dois%i==0){
                mmc*=i;
                if(!(um%i)){
                    um/=i;
                }if(!(dois%i)){
                    dois/=i;
                }
            }else{
                i++;
            }
        }else{
            i++;
        }
    }
    return mmc;
}
int mdc(int um, int dois){
    int mdc=1, i2;

    return mdc;
}
int main(){
    int entradaUm, entradaDois;
    scanf("%d%d", &entradaUm, &entradaDois);
    printf("MMC: %d\nMDC: %d", mmc(entradaUm, entradaDois), mdc(entradaUm, entradaDois));
    return 0;
}
/*
MMC - Menor Multiplo Comum
    fatores primos comum a ambos multiplicados (apenas uma vez)
    ex: 12 e 18
        12 = 2^2 * 3
        18 = 2 * 3^2
        mmc = 2^2 * 3^2 = 36
int mmc(int entradaUm, int entradaDois){
    int mmc = 1, i = 2;
    while(entradaUm > 1 || entradaDois > 1){
        if(eh_primo(i)){
            if(entradaUm % i == 0 || entradaDois % i == 0){
                mmc *= i;
                if(entradaUm % i == 0){
                    entradaUm /= i;
                }
                if(entradaDois % i == 0){
                    entradaDois /= i;
                }
            }else{
                i++;
            }
        }else{
            i++;
        }
    }
    return mmc;
}

int mdc(int entradaUm, int entradaDois){
    int mdc = 1, i = 2;
    while(entradaUm > 1 || entradaDois > 1){
        if(eh_primo(i)){
            if(entradaUm % i == 0 && entradaDois % i == 0){
                mdc *= i;
                entradaUm /= i;
                entradaDois /= i;
            }else{
                i++;
            }
        }else{
            i++;
        }
    }
    return mdc;
}

MDC - Maximo Divisor Comum
    menor fator primo comum a ambos
*/

