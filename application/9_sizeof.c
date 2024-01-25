#include <stdio.h>
int main()
{
    int i;
    double f;
    printf("%d\n", sizeof(i));
    printf("%f\n", sizeof(double));
    printf("%d\n", &i);
    printf("%x\n", &f);
}