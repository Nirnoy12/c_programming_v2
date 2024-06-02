#include<stdio.h>
int main(){
    int n,s,i,j;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Press 1 for sorting in ascending order\nPress 2 for sorting in descending order\n");
    scanf("%d",&s);
    switch(s){
        case 1:{
            for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                    if(arr[j]>arr[j+1]){
                        arr[j]=arr[j]+arr[j+1];
                        arr[j+1]=arr[j]-arr[j+1];
                        arr[j]=arr[j]-arr[j+1];
                    }
                }
            }
        }
        case 2:{
            for(i=0;i<n-1;i++){
                for(j=0;j<n-i-1;j++){
                    if(arr[j]<arr[j+1]){
                        arr[j]=arr[j]+arr[j+1];
                        arr[j+1]=arr[j]-arr[j+1];
                        arr[j]=arr[j]-arr[j+1];
                    }
                }
            }
        }
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}