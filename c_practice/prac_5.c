#include<stdio.h>
int main(){
    int max,min,n,a,b,c;
    printf("Enter the numbers:-\n");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    min=(a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("max = %d\n",max);
    printf("min = %d",min);
}