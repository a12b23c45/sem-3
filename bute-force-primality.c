#include <stdio.h>
#include <stdbool.h>

bool isPrime(int N) {
    if (N <= 1) {
        return false;  // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            return false;  // N is divisible by i, so it's not prime
        }
    }

    return true;  // N is prime
}

int main() {
    int N;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (isPrime(N)) {
        printf("%d is a prime number.\n");
    } else {
        printf("%d is not a prime number.\n");
    }

    return 0;
}
