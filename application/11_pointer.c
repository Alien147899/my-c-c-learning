#include <stdio.h>
int main()
{   int i = 0;
    int* p = &i; //int*p --> 指针p指向的变量i是int类型，然后i的地址被存放进指针p里
                //void * 是指指针指向的变量数据类型未知
    *p = 26;// i的值被传递进26
    printf("%d\n", *p);
    printf("%d\n", i);
}

