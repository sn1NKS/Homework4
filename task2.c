#include <stdio.h>

int main(void)
{
    int a, digit, count = 0;
    scanf("%d", &a);
    
    while (a > 0)
    {
        digit = a % 10;
        a /= 10;
        count++;
    }

    if (count == 3)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}