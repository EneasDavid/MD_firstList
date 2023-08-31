#include <stdio.h>
#include <time.h>
#include <math.h>

int eh_primo(int entrada) {
    if (entrada == 2) {
        return 1;
    }
    if (entrada < 2 || entrada % 2 == 0) {
        return 0;
    }
    for (int i = 2; i <= sqrt(entrada); i += 2) {
        if (entrada % i == 0) {
            return 0;
        }
    }
    return 1;
}
int watch(int intervalo, time_t inicio) {
     while ((time(NULL)-inicio) < 60) {
         if (eh_primo(intervalo)) {
             printf("%d\n", intervalo);
         }
         intervalo += 2;
    }
}
int main() {
    watch(1,time(NULL));
    return 0;
}
