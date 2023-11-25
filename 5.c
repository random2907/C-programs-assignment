#include <stdio.h>
int main(){
	int i,j,k,rows,number=1;
	printf("Enter the rows: ");
        scanf("%d",&rows);
	rows=(rows+1)/2;
	for (i=1;i<=rows;i++){
		for (j=1;j<=rows-i;j++){
			printf(" ");
		}
		for (k=1;k<=(2*i)-1;k++){
			printf("%d",number);
			number+=1;
		}
		number=1;
		printf("\n");
	}
	rows=rows-1;
	for (i=rows;i>=1;i--){
		for (j=1;j<=rows-i+1;j++){
			printf(" ");
		}
		for (k=1;k<=(2*i)-1;k++){
			printf("%d",number);
			number+=1;
		}
		number=1;
		printf("\n");
	}
	return 0;
}
