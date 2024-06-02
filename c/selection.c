#include<stdio.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int main(){

    int n,min,i,j,min_idx;
    scanf("%d",&n);
    int arr[n];

    // Input 
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
           if(min_idx != i) 
            swap(&arr[min_idx], &arr[i]); 
    } 

    // Output
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}