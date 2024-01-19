#include <stdio.h>

int main(void)
{
    int a, digit, tmp;
    scanf("%d", &a);
    
    while (a > 0)
    {
       digit = a % 10;
        if(digit % 2 == 0)
        {
            a /= 10;
        }
        else
        {
            a /= 10;
            tmp = digit;
        }
    }

    if (tmp)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;       
}