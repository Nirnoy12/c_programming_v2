#include <stdio.h>
int main(void)
{
    int i;
    int j;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}