#include <stdio.h>

int main(){
	int odd,even;
	int x[5]={1,6,5,7,4};
	for (int i=0;i<5;i++){
		if (x[i]&1){
			odd++;
		}
		else{
			even++;
		}
	}
	printf("number of even is %d\nnumber of odd is %d\n",even,odd);
	return 0;
}
