#include <stdio.h>

int prime(int *p){
   int x=0;
   for (int i=2;i<*p;i++){
      if (*p%i==0){
         x++;
         break;
      }
   }
   return x;
}


int main(){
   int m;
   printf("Enter prime: ");
   scanf("%d",&m);
   if (prime(&m)!=0){
      printf("Not prime");
   }else{
      printf("Prime");
   }
   return 0;
}
