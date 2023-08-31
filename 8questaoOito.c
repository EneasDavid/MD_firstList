#include <stdio.h>
int gcd(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int greatestCommonDivisor = gcd(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return greatestCommonDivisor;
}
int mod_inverse(int a, int m) {
    int x, y;
    int greatestCommonDivisor = gcd(a, m, &x, &y);
    if (greatestCommonDivisor != 1) {
        return -1;
    } else {
        int result = (x % m + m) % m;
        return result;
    }
}
int congruence_solution(int a, int b, int m) {
    int inverse = mod_inverse(a, m);
    if (inverse == -1) {
        return -1;
    } else {
        int result = (inverse * b) % m;
        return result;
    }
}
int main() {
    int a, b, m;
    printf("Enter values for a, b, and m in the congruence ax ≡ b mod m:\n");
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    int solution = congruence_solution(a, b, m);
    if (solution != -1) {
        printf("Solution of the congruence is: %d\n", solution);
    } else {
        printf("No solution exists.\n");
    }
    return 0;
}