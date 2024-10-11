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
    printf("%d is a prime number; it has %d factor\n",num,count_factors);
      int count = num,init = 0,final = 1,plus;
       for(int i= 0;i<count;i++){
     if(i<=1 ){
       final = i;
     }
     else{
      plus = init + final ;
      init = final ;
      final= plus;
     }

   printf("%d\n",final);
}
   }else printf("the number is not prime");
  

 
return 0;

}
