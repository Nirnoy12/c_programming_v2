#include<stdio.h>
#include<math.h>
int main(){
    int i,n,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        ans+=pow(n,n);
    }   
    printf("Your answer:%d",ans);
}