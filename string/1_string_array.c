#include <stdio.h>
#include <string.h>
int main()
{
    char word[] = {'f','u','c','k','\0'};
    for(int i=0; i<sizeof(word)/sizeof(word[0]); i++)
    {
        printf("%c", word[i]);
        printf(" ");
    }
    printf("\n");
    printf("%s", word);
}