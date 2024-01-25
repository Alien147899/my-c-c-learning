#include<stdio.h>
int main()
{
    char ch = 255;// ch = -1; if ch=256, ch=0
    int i = 255;// i = 255
    printf("ch=%d, i=%d\n", ch, i);
    //ch ----> 11111111(1 byte)
    //i  ----> 00000000 00000000 00000000 11111111(4 bytes)
}   