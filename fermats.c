#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Modular exponentiation function (a^b % N)
long long modPow(long long a, long long b, long long N) {
    long long result = 1;
    a %= N;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % N;
        }
        a = (a * a) % N;
        b /= 2;
    }
    return result;
}

bool primality2(int N, int k) {
    if (N <= 1) {
        return false;
    }
    
    // Seed the random number generator
    srand(time(NULL));
    
    for (int i = 0; i < k; i++) {
        int a = 2 + rand() % (N - 2);  // Randomly choose a between 2 and N-2
        long long result = modPow(a, N - 1, N);
        if (result != 1) {
            return false; // N is definitely composite
        }
    }
    
    return true; // N is likely prime
}

int main() {
    int N, k;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    
    printf("Enter the number of random tests (k): ");
    scanf("%d", &k);

    if (primality2(N, k)) {
        printf("%d is likely prime.\n", N);
    } else {
        printf("%d is composite.\n", N);
    }

    return 0;
}
