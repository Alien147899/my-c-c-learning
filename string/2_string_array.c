#include <stdio.h>
#include <string.h>
int main()
{
    const char* str = "fuck you"; //指针str指向 "fuc..."这个字符串，这样赋值不能修改里面的字符
    char word[] = "retard";//为什么这种赋值方式会比上面的好？------（未找到答案，总之程序员一般给数组赋值字符串不会用上面的方式）
    word[0] = 'a';
    printf("%s\n", word);
    printf("%s\n", str);
    printf("%c\n", str[7]);
    printf("%p\n", str);//str的首地址
    printf("%p\n", word);//word数组的首地址
    printf("%x\n", &str[0]);//证明了第四行打的确实是str的首地址
}
