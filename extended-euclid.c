 #include <stdio.h>

void extendedEuclidean(int a, int b, int *x, int *y, int *d) {
    if (b == 0) {
        *d = a;
        *x = 1;
        *y = 0;
    } else {
        int x1, y1;
        extendedEuclidean(b, a % b, &x1, &y1, d);
        *x = y1;
        *y = x1 - (a / b) * y1;
    }
}

int main() {
    int a, b, x, y, d;

    printf("Enter two positive integers (a and b): ");
    scanf("%d %d", &a, &b);

    extendedEuclidean(a, b, &x, &y, &d);

    printf("GCD(%d, %d) = %d\n", a, b, d);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
