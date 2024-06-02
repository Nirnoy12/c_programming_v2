#include<stdio.h>
#include<math.h>

int main(){
    int i,num,tempVar,digitCount,remainder,sum;
    printf("Enter the number:-");
    scanf("%d",&num);
    tempVar=num;
    while(tempVar>0){
        tempVar=tempVar/10;
        digitCount++;
    }
    tempVar=num;
    while(tempVar>0){
        remainder=tempVar%10;
        sum+=pow(remainder,digitCount);
        tempVar/=10;
    }
    if(sum==num)
        printf("An armstrong number");
    else
        printf("Not a armstrong number");
    return 0;
}