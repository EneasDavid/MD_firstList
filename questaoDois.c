#include <stdio.h>
#include <time.h>
int eh_primo(int vez){
    for(int i=2;i<vez;i++){
        if(!(vez%i)){
             return 0;
        }
    }
    return 1;
}
int watch(int intervalo){
     time_t inicioLoop = time(NULL);
     time_t agora = time(NULL); // Obtém o tempo atual
     while (agora - inicioLoop <60) {
         agora = time(NULL); // Obtém o tempo atual
         if(eh_primo(intervalo)){
             printf("%d\n",intervalo);
         }
         intervalo++;
    }    
}
int main(){
    watch(1);
    return 0;
}