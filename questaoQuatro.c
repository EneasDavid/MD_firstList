#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int mdc(int um, int dois) {
    if (dois == 0) {
        return um;
    }
    return mdc(dois, um % dois);
}

int mmc(int um, int dois) {
    return (um * dois) / mdc(um, dois);
}

int main() {
    int entradaUm, entradaDois;
    scanf("%d%d", &entradaUm, &entradaDois);
    printf("MDC = %d\n", mdc(entradaUm, entradaDois));
    printf("MMC = %d\n", mmc(entradaUm, entradaDois)); 
    return 0;
}
