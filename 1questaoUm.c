#include <stdio.h>
#include <math.h>
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


int main(){
    int numero;
    scanf("%d", &numero);
    printf(eh_primo(numero)?"A entrada é primo\n":"A entrada não é primo\n");
    return 0;
}
