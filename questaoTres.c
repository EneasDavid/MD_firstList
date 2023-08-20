#include <stdio.h>
int eh_primo(int vez){
    for(int i=2;i<vez;i++){
        if(!(vez%i)){
             return 0;
        }
    }
    return 1;
}
void decomposicao(int valorDecomposto, int i, int decomposicaoTotal[]){
    while(valorDecomposto > 1){
        if(eh_primo(i)){
            if(valorDecomposto % i == 0){
                decomposicaoTotal[i]=i;
                valorDecomposto/=i;
            }
        }
        i++; 
    }
}
int main(){
    int entrada;
    scanf("%d", &entrada);
    decomposicao(entrada,2,);
    return 0;
}