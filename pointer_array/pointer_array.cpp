#include <iostream>
using namespace std;
int main()
{   
    int a[] = {0,2,3,5,6,4};
    int size = sizeof(a)/sizeof(a[0]);
    cout<< *a <<endl;
    cout<< *a+1 <<endl; //数组初始化*a = a[0], *a+1 = a[0] + 1 = 1
    cout<< *(a+3) <<endl;//指针地址往后三位，就是a[0]后三位,前进3个int
                         //*a 是一个const指针，永远指向a[0]的地址
    int* p = a;
    for(int i=0; i<size; i++)
    {
        cout<<*p<<" ";
        p++;
    }
}