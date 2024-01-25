/*find prime number in 100*/
#include<stdio.h>
int main()
{
    
    int num;
    int i;
    
    for(num = 2; num < 100; num++)
    {   
        int is_prime = 1;
        for(i = 2; i < num; i++ )
            if(num % i == 0)
            {   
                is_prime = 0;
                break;
            }
        if (is_prime == 1)
        {
            printf("%5d", num);
        }
    }   
}