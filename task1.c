#include <stdio.h>

int main(void)
{
    int a, b, mult, sum;
    scanf("%d%d", &a,&b);

    while (a <= b)
    {
       mult = a * a;
       sum += mult;
       a++; 
    }
    
    printf("%d\n", sum);
    
    return 0;
}