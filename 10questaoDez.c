#include <stdio.h>
#include <math.h>

int mod(int a, int d, int s1, int s2) {
    int q = a / d;
    int r = a % d;
    if (r == 0) {
        return d;
    }
    s2 = s2 - q * s1;
    return mod(d, r, s2, s1 - q * s2);
}

int main() {
    int n;
    printf("Quantidade de entradas: ");
    scanf("%d", &n);

    int b[n];
    int m[n];
    int Nn[n];

    printf("Digite pares de valores b e m:\n");
    for (int h = 0; h < n; h++) {
        scanf("%d %d", &b[h], &m[h]);
    }

    int N = 1;
    for (int h = 0; h < n; h++) {
        N *= m[h];
    }

    printf("N = %d\n", N);

    for (int h = 0; h < n; h++) {
        Nn[h] = N / m[h];
        printf("N%d = %d\n", h, Nn[h]);
    }

    int y[n];
    for (int h = 0; h < n; h++) {
        if (mod(Nn[h], m[h], 1, 0) != 1) {
            printf("%d e %d não são coprimos.\n", Nn[h], m[h]);
            break;
        }
        y[h] = mod(Nn[h], m[h], 1, 0);
        printf("y%d = %d\n", h, y[h]);
    }

    int x = 0;
    for (int h = 0; h < n; h++) {
        int ai = (N / m[h]);
        x += (b[h] * ai * y[h]) % N;
    }

    x = x % N;

    printf("x = %d\n", x);

    return 0;
}
