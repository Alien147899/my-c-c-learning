#include <stdio.h>
int main()
{
    int i = 26;
    int p;
    p = (int)&i;//  强制转换类型
    printf("%p\n", p);
    printf("%p", &i);
}