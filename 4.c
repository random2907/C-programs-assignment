#include <stdio.h>
int main(){
	char number='A';
	int i,j,k,rows;
	printf("Enter the rows: ");
        scanf("%d",&rows);
	for (i=1;i<=rows;i++){
		for (j=0;j<=rows-i;j++){
			printf("%c ",number);
			number+=1;
		}
		printf("\n");
	}
	return 0;
}
		
