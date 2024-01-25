/*输出100以内的素数*/
#include<stdio.h>
int main()
{   
    int num;
    for(num = 2; num < 100; num++)
    { 
        int i;
        int x = 0;
        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {   
                x = 1;
                break;// break 是直接跳出for循环执行下一行
            }
        }
        if (x == 0)
        {
            printf("%5d", num);
        }
    }
}


