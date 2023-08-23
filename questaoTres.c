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
void decomposicao(int valorDecomposto, int i){
    if(!(eh_primo(valorDecomposto))){
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
    }else{
        printf("%d",valorDecomposto);
    }
}
int main(){
    int entrada;
    scanf("%d", &entrada);
    decomposicao(entrada,2);
    return 0;
}
