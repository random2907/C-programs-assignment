#include <stdio.h>
int you(){
    int i,j,k,rows;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++){
        for (k=1;k<=i-1;k++){
                printf(" ");
            }
        for (j=0;j<=rows-i;j++){
            
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
