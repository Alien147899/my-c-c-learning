#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int number;
    printf("enter number:");
    scanf("%d", &number);
    //int a[number]; 这是静态分布内存，我要输入一个值就存进一个值
    int* a;
    a = (int*)malloc(number * sizeof(int));//给数组a动态分布地址，指针指向的值是int类型，number个值...
    int i;
    for(i=0; i<number; i++)
    {
        printf("enter value:");
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<number; i++)
    {
        printf("%d", a[i]);
        printf(" ");
    }
    free(a);//释放动态内存
    
}