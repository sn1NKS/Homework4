#include <stdio.h>

int main(void)
{
    int a, digit;
    scanf("%d", &a);
    
    while (a > 0)
    {
       digit = a % 10;
       a /= 10;
       printf("%d", digit);
    }
    
    return 0;
}