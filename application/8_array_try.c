#include<stdio.h>
int main()
{
    int arr[] = {2,4,5,6,7,4,3,6,7,8,9,10,34};
    {
        int i;
        for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)//sizeof(arr)/sizeof(arr[0])数组的元素个数
        {
            printf("%d\t", arr[i]);
        } 
    }  
}