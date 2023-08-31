#include <stdio.h>
int euclides(int A, int D, int *s, int *t) {
    int s0 = 1, s1 = 0, t0 = 0, t1 = 1;
    int q, r, m, n;
    while (A > 0) {
        q = D / A;
        r = D % A;
        m = s0 - q * s1;
        n = t0 - q * t1;
        D = A;
        A = r;
        s0 = s1;
        t0 = t1;
        s1 = m;
        t1 = n;
    }
    *s = t0;
    *t = s0;
    return D;
}
int main() {
    int A, D;
    int scan_return = scanf("%d %d", &A, &D);
    if (scan_return != 2) {
        return 0;
    }
    int s_value = 0, t_value = 0;
    int mdc = euclides(A, D, &s_value, &t_value);
    printf("%d %d = %d: %d e %d\n", A, D, mdc, s_value, t_value);
    return 0;
}
