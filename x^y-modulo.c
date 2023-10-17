#include <stdio.h>

long long modexp(long long x, long long y, long long N) {
    if (y == 0) {
        return 1;
    }

    long long z = modexp(x, y / 2, N);

    if (y % 2 == 0) {
        return (z * z) % N;
    } else {
        return ((x * z * z) % N);
    }
}

int main() {
    long long x, y, N;

    printf("Enter the values of x, y, and N: ");
    scanf("%lld %lld %lld", &x, &y, &N);

    if (y < 0 || N <= 0) {
        printf("Invalid input: y must be non-negative, and N must be positive.\n");
    } else {
        long long result = modexp(x, y, N);
        printf("Result of %lld^%lld mod %lld is: %lld\n", x, y, N, result);
    }

    return 0;
}
