#include<stdio.h>
int main()
{
    int status;
    printf("1, 2, 3, 4 :\n");
    scanf("%d", &status);

    switch (status)
    {
        case 1:
            printf("A\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("C\n");
            break;
        case 4:
            printf("D\n");
            break;
    
        default:
        break;
    }
    return 0;
}