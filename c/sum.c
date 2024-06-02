#include <stdio.h>
int main(){
    int n,a=0,sum=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        sum+=a;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}