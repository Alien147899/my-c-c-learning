//用欧几里得算法，辗转相除法
/*原理：找a，b的最大公约数，计算a除以b的余数，
原先的b等于a，然后让余数等于b，以此类推，
等b等于0的时候，a就是最大公约数*/
#include<stdio.h>
int main()
{
    int a, b = 0;
    int reminder = 0;
    
    printf("enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    
    do{
        reminder = a % b;
        a = b;  // 记得先给被除数赋值
        b = reminder;
    }while (b != 0);
printf("gcd is %d\n", a);
    
}