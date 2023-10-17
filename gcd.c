// gcd of 2 natural numbers
#include <stdio.h>

int main() {
    int n1,n2,i,gcd;
    
    printf("enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    
     gcd=800;
    for(i=1;i<=n1 && i<=n2;++i){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    printf("gcd of %d and %d is %d",n1,n2,gcd);
     
    return 0;
}