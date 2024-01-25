#include <stdio.h>
int main()
{
    char a[][10]=
    {
        "retard",
        "asshole",
        "whole"
    };
    
    for (int i=0; i<sizeof(a)/sizeof(a[0]); i++) 
    {
        printf("%s\n", a[i]);
    }
}