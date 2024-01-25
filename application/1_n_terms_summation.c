#include<stdio.h>
int main()
{   

    int i = 0;
    int n = 0;
    int sum = 0;
    printf("enter terms:\n");
    scanf("%d", &n);
    for(i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("n term is %d\n", sum);