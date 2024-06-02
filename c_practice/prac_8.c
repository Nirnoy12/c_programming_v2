#include<stdio.h>

int main(){
    int num,i,isPrime;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>0){
        for(i=2;i<num/2;i++){
            if(num%i==0){
                isPrime++;
            }
        }
        if(isPrime!=0)
            printf("Not a prime number");
        else
            printf("It is a prime number");
    }
    else
    printf("Enter a positive integer");
}