#include <stdio.h>

int n=3;

float average(int array[]);

int main(void)
{
    printf("How many numbers do you want to average\n");
    scanf("%d",&n);
    printf("Please enter the numbers you want to average\n");
    int numbers[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("Average is : %f\n",average(numbers));
}
float average(int array[])
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=array[i];
    }
    return sum/(float)n;
}