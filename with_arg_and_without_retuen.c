#include <stdio.h>
float printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %c ", '*');
        printf("\n");
    }
}
int main()
{
    printstar(7);
    // printf("the entered number is %d" c);
    return 0;
}