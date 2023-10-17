#include <stdio.h>

void divide(int x, int y, int *q, int *r) {
    if (x == 0) {
        *q = 0;
        *r = 0;
    } else {
        int quotient, remainder;
        divide(x >> 1, y, &quotient, &remainder);
        *q = quotient << 1;
        *r = remainder << 1;
        
        if (x & 1) {
            *r = *r + 1;
        }
        
        if (*r >= y) {
            *r = *r - y;
            *q = *q + 1;
        }
    }
}

int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int quotient, remainder;

    divide(x, y, &quotient, &remainder);

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

return 0;
}
