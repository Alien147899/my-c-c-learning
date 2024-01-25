#include <stdio.h>
int main(void)
{
int ref[] = {8, 4, 0, 2};
int *ptr;
int index;
for (index = 0, ptr = ref; index < 4; index++, ptr++)//ref++ 是不可取的，ref指针指的永远是数组首地址，不能随意改变，所以我们创造出ptr指针来操作数组
    {
        printf("%d %d\n", ref[index], *ptr);
    }
}