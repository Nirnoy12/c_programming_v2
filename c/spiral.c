#include<stdio.h>

int main(){

    int n,m;
    scanf("%d ",&n);
    scanf("%d",&m);

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int cs=0,ce=m-1,rs=0,re=n-1;
    
    while(rs<=re && cs<=ce){

        for(int c=cs;c<=ce;c++){
            printf("%d ",arr[rs][c]);
        }
        rs++;
        printf("\n");

        for(int r=rs;r<=re;r++){
            printf("%d ",arr[r][ce]);
        }
        ce--;

        for(int c=ce;c>=cs;c--){
            printf("%d ",arr[re][c]);
        }
        re--;

        for(int r=re;r>=rs;r--){
            printf("%d ",arr[r][cs]);
        }
        cs++;

        printf("\n");
    }
}