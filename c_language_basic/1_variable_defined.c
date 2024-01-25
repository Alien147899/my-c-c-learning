#include<stdio.h>
int main()
{
    int price = 0; // 对变量进行初始化为，如果不作初始化很可能一开始price的值是很奇怪的数值（一个好习惯）
    int change = 0;
    printf("enter the price\n");
    scanf("%d", &price);
    change = 100 - price;
    printf("return %d\n", change);
}