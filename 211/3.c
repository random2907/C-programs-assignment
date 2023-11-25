#include <stdio.h>

int main(){
	int i,j,rows=3,column=3,temp;
	int arr[3][4]={{7,10,49},{86,2,14},{31,96,58}};

	for (i=0;i<rows;i++){
		for (j=0;j<column;j++){
			temp = arr[i][j];  
        		arr[i][j] = arr[j][i];  
        		arr[j][i] = temp;  			
		}
	}
	for(i=0; i<rows; i++){  
    		for(j=0; j<column; j++){  
        		printf("%d ", arr[i][j]);  
    		}  
    		printf("\n");  
	}
	return 0;
}
