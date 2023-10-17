#include <stdio.h>

int addModN(int x, int y, int N) {
    int sum = x + y;

    if (sum >= N) {
        sum -= N;
    }

    return sum;
}

int main() {
    int x, y, N;

    printf("Enter the values of x, y, and N: ");
    scanf("%d %d %d", &x, &y, &N);

    int result = addModN(x, y, N);

    printf("The result of %d + %d modulo %d is: %d\n", x, y, N, result);

    return 0;
}
