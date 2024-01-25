#include<stdio.h>
int isprime(int i); //函数声明

int isprime(int i) //函数定义
    {
        int prime = 1;
        for(int div=2; div<i; div++)
        {
            if(i%div==0)
            {
                prime = 0;
                break;
            }    
        }
        return prime;
    }
    
int main()
{

    int sum = 0;
    int num = 0;
    printf("put a number:\n");
    scanf("%d", &num);
    for(int i=2; i<num; i++)
    {
        if(isprime(i))
        {
            sum = sum + i;
        }
    }
    printf("%d", sum);
}