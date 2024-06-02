#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;
    int n;
    printf("Enter principal amount, rate of interest, time\n");
    scanf("%d %d %d",&p,&r,&t);
    printf("Enter \n1 for using simple interest \n2 for using compound interest\n");
    scanf("%d",&n);
    switch(n){
        case 1:{
            float si,A;
            si=(p*r*t)/100.0;
            A=si+p;
            printf("Your Maturity amount=%f",A);
        }break;
        case 2:{
            float A;
            A=p * pow((1 + r / 100.0), t);
            printf("Your Maturity amount=%f",A);
        }break;
        default:
        printf("Wrong Input");
    }
}