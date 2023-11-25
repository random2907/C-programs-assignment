#include <stdio.h>

int main(){
    int m,n;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    int *p=&m;
    int *q=&n;
    for (int i=*p;i<=*q;i++){
         if (i%2==0){
            printf("%d\n",i);
         }
    }
    return 0;
}
