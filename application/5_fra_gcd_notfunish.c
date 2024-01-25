#include<stdio.h>
int main()
{
    int a, b;
    int reminder = 0;
    printf("enter a/b:\n");
    scanf("%d/%d",&a,&b);
    do{
        reminder = a % b;
        a = b;
        b = reminder;
    }while( b != 0);
}
