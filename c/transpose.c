#include<stdio.h>
int main(){

    int rows,columns,i,j,temp=0;
    scanf("%d",&rows);
    scanf("%d",&columns);

    int arr[rows][columns];

    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}