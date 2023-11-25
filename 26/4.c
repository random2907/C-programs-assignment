#include <stdio.h>

int main(){
	int max,last,i=0;
	int x[5]={6,56,4,44,165};
	max=x[i];
	for (i=0;i<5;i++){
		if (max<x[i]){
			max=x[i];
		}
	}
	last=x[i];
	for (i=0;i<5;i++){
		if (last<x[i] && x[i]<max){
			last=x[i];
		}
	}

	printf("last max is %d\n",last);
	printf("max is %d\n",max);
	return 0;
}
		

