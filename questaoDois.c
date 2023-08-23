#include <stdio.h>
#include <time.h>
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
int watch(int intervalo) {
     time_t inicioLoop = time(NULL);     
     while ((time(NULL)-inicioLoop) < 60) {
         if (eh_primo(intervalo)) {
             printf("%d\n", intervalo);
         }
         intervalo += 2;
    }
}
int main() {
    watch(1);
    return 0;
}