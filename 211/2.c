#include <stdio.h>

int main(){
	int i,j,element,k;	
	int mul[3][3];	
	int arr1[3][4]={{7, 10, 49, 82}, {86, 2, 14, 30}, {31, 96, 58, 62}};
	int arr2[4][3]={{33, 39, 47}, {101, 19, 10}, {11, 91, 89},{3,2,6}};

	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			for (k=0;k<4;k++){
				element+=arr1[i][k]*arr2[k][j];
			}
			mul[i][j]=element;
			printf("%d ",element);
			element=0;
		}	
		printf("\n");
	}
	return 0;
}
