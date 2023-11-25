#include <stdio.h>

int main(){
	int count=0;
	char x[5]={'a','b','D','G','I'};
	for (int i=0;i<5;i++){
		if (x[i] == 'a' || x[i] == 'A' || x[i] == 'e' || x[i] == 'E' || x[i] == 'i' || x[i] == 'I' || x[i] == 'o' || x[i] == 'O' || x[i] == 'u' || x[i] == 'U' ){
			count++;
			}
	}
	printf("number of vowels are %d\n",count);
	return 0;
}
