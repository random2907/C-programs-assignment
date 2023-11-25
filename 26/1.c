#include <stdio.h>

int main(){
	float avg_x,avg_y;
	int x[5]={40,2,6,9,10};
	int y[5]={20,7,9,10,1};
	for (int i=0;i<5;i++){
		avg_x+=x[i]/5;
		avg_y+=y[i]/5;
	}
	if (avg_x>avg_y){
		printf("average of x is greater than y\n");
		printf("average of x is %f and y is %f\n",avg_x,avg_y);
	}else if(avg_x<avg_y){
		printf("average of y is greater than x\n");
		printf("average of x is %f and y is %f",avg_x,avg_y);
	}
	else{
		printf("average of x is equal to y\n");
		printf("average of x is %f and y is %f",avg_x,avg_y);
	}
		
	return 0;
}

