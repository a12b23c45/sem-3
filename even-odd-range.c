// to primnt evne and odd at certain range
#include <stdio.h>

int main() {
     int limit;
     printf("enter the limit: ");
     scanf("%d",&limit);
     
     if(limit%3==0){
         limit--;
     }
     
     for(int i=1;i<=limit;i+=2){  // for odd i=0,, i=1
         printf(" %d",i);
     }
}
