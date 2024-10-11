#include <stdio.h>
int main() {
   int num,count_factors;
   count_factors = 0;
   printf("Enter a number");
   scanf("%d",&num);
   for(int i = 1;i<=num;i++){
    if(num%i==0){
       count_factors += 1;
    }
   }
   if(count_factors <= 2) {
    printf("%d is a prime number; it has %d factors",num,count_factors);
   }else printf("the number is not prime");
   return 0;
}


