#include <stdio.h>
float sum(int a, int b)
{
    return (a + b);
}
int main()
{
    int a, b, c;
    a = 35;
    b = 25;
    c = sum(a, b);
    printf("the sum is %d", c);
    return 0;
}