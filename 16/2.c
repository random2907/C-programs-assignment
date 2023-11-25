#include <stdio.h>
#include <math.h>

float distance(float x1,float y1,float x2,float y2)
{
    float dis;
    dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return dis;
}

float area(float a,float b,float c){
    float s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

float check(float d1,float d2,float d3,float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,float area1){
    float d4=distance(x1,y1,x4,y4);
    float d5=distance(x2,y2,x4,y4);
    float d6=distance(x3,y3,x4,y4);
    float a1=area(d1,d5,d6);
    float a2=area(d2,d5,d4);
    float a3=area(d3,d4,d6);
    float area2=a1+a2+a3;
    if (area1==area2){
        return 1;
    }else{
        return 0;
    }
}

int main ()
{
    float x[4],y[4];
    int i;
    for (i=0;i<4;i++)
    {
        printf("Enter x coordinate :");
        scanf("%f",&x[i]);
        printf("Enter y coordinate :");
        scanf("%f",&y[i]);
    }
    float d1=distance (x[0],y[0],x[1],y[1]);
    float d2=distance (x[1],y[1],x[2],y[2]);
    float d3=distance (x[2],y[2],x[3],y[3]);
    printf("Distances are as follows: d1 %f d2 %f d3 %f\n",d1,d2,d3);
    float arr=area(d1,d2,d3);
    printf("Area of triangle is %f\n",arr);
    printf("point is %f\n",check(d1,d2,d3,x[0],y[0],x[1],y[1],x[2],y[2],x[3],y[3],arr));
    return 0;
}
