/*只能被1和自己整除的数，不包括1(素数)*/
//要检查输入的是不是1，如果是的话需要用户重新输入
#include<stdio.h>
int main()
{
    int num;
    int i;
    int x = 0;

    printf("enter a number:\n");
    while(scanf("%d", &num)==1) //scanf("%d", &num)==1 返回的值是1（true）
    {
        if(num==1||num==-1||num==0)
        {
            puts("don't give me 1 0 -1");
            continue;
        }
        else
        {
            break;
        }
    }
    
    for(i = 2; i <= num/2; i++)
    {
    
        if(num % i == 0)
        {   
            x = 1;
            printf("it is not a prime number\n");
            break;// break 是直接跳出for循环执行下一行
        }
    }
    if (x == 0)
    {
        printf("it is a prime number\n");
    }
}
