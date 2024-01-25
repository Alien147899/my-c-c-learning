#include<stdio.h>
int main()
{   
    int i = 0;
    int j = 0;
    
    printf("enter 2 number:\n");
    scanf("%d, %d", &i, &j); // 输入时要按照scanf里面的格式来 e.g: (1, 2)
    printf("%d,%d\n", i, j);

    printf("enter 2 number:\n");
    scanf("%d %d", &i, &j);
    printf("%d,%d\n", i, j);
    
    printf("enter 2 number:\n");
    scanf("%d,%d", &i, &j);
    printf("%d,%d\n", i, j);


}