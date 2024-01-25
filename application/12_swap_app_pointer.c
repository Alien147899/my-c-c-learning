#include <stdio.h>
void swap(int *pa, int *pb);
int main()
{
    int a = 5;
    int b = 6;
    swap(&a , &b);
    printf("a=%d, b=%d\n", a, b);
}

/*void swap(int pa, int pb)//只会在swap函数中传递数值，不会引用到main函数，所以要用指针
{
  int t = pa;
    pa = pb;
    pb = t;
    printf("pa = %d, pb = %d\n", pa, pb);
}*/
void swap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
