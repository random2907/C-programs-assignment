#include <stdio.h>
#include <math.h>

int main(){
    double a[10];
    double p[10]={10,9,8,7,6,5,4,3,2,1};
    double r[10]={10,9,8,7,6,5,4,3,2,1};
    double n[10]={10,9,8,7,6,5,4,3,2,1};
    double q[10]={10,9,8,7,6,5,4,3,2,1};

    int i;

    for (i=0;i<10;i++){
        a[i]= p[i]*pow((1+(r[i]/q[i])),n[i]*q[i]);
        printf("%d value is %f\n",i+1,a[i]);
    }   

    return 0;
}


