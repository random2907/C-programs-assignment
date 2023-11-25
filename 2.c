#include <stdio.h>
int main(){
	int i,j,k,rows,number=1;
	printf("Enter the rows: ");
        scanf("%d",&rows);
	for (i=1;i<=rows;i++){
		for (j=rows-i;j>=0;j--){
			printf(" ");
		}
		for (k=1;k<=i;k++){
			printf("%d ",number);
			number+=1;
		}
		printf("\n");
	}
	return 0;
}
