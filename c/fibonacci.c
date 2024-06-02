#include <stdio.h>
int main(){
    int n,a=-1,b=1,sum=0;
    printf("ENTER THE Nth TERM\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    return 0;
}