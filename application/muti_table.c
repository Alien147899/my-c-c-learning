#include<stdio.h>
int main()
{
    int i = 0;
    for(i = 1; i <= 9; i++)
    {   
        int j = 0;
        for(j = 1; j <= i; j++)
        {
            printf("%d*%d=%d",i,j,i*j);
            if((i*j) >= 10)
            {
                printf("  ");
            }
            else if((i*j) < 10)
            {
                printf("   ");
            }
        }
    printf("\n");
    }
}