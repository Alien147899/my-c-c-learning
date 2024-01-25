#include <stdio.h>
#include <stdlib.h>
int main()
{
    char** a;
    int dim2 =2;
    int col = 3;
    a = (char**)malloc(dim2 * sizeof(char*));
    for(int i=0; i<dim2; i++)
    {
        a[i] = (char*)malloc(col * sizeof(char));
        
        
    }
    


}
