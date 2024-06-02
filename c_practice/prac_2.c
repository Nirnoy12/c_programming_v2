#include<stdio.h>
int main(){
    int a,b,c,n;
    printf("Input two integers\n");
    scanf("%d %d",&a,&b);
    printf("Your given numbers:-\na=%d \nb=%d \nNow I'm going to switch the numbers\n",a,b);
    printf("How you want to switch using third variable or not\n");
    printf("Press 1 for using third variable \nPress 2 for not using\n");
    scanf("%d",&n);
    switch(n){
        case 1:{
            c=a;
            a=b;
            b=c;
            printf("a=%d \nb=%d",a,b);
        }break;
        case 2:{
            a=a+b;
            b=a-b;
            a=a-b;
            printf("a=%d \nb=%d",a,b);
        }break;
        default:{
            printf("Unfortunately you pressed wrong ! Try again.");
        }
    }
}