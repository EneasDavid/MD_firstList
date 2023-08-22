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