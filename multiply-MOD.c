#include <stdio.h>


int multiplyModN(int x, int y, int N) {
    long long result = (long long)x * y;
    result = result % N; 
    return (int)result;
}

int main() {
    int x,y,N;
    scanf("%d ",&x);
    scanf("%d",&y);
    scanf("%d",&N);
    
    
    int product = multiplyModN(x, y, N);
    
    printf("The product of %d and %d modulo %d is: %d\n", x, y, N, product);
    
    return 0;
}