#include <stdio.h>

int main(){
	int i,j,element,rows=3,column=4;
	int sum[3][4];
	int sub[3][4];
	int arr1[3][4]={{1,2,3,4},{4,5,6,9},{7,8,9,0}};
	int arr2[3][4]={{5,34,6,3},{34,2,32,2},{23,3,5,6}};
	printf("Addition of matrix\n");
	for (i=0;i<rows;i++){
		for (j=0;j<column;j++){
			element=arr1[i][j]+arr2[i][j];
			sum[i][j]=element;
			printf("%d ",element);
		}
		printf("\n");
	}
	printf("Subtraction of matrix\n");
	for (i=0;i<rows;i++){
		for (j=0;j<column;j++){
			element=arr1[i][j]+arr2[i][j];
			sub[i][j]=element;
			printf("%d ",element);
		}
		printf("\n");
	}
	return 0;
}
