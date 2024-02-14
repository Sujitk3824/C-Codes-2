#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Multiplication Number\n");
    scanf("%d", &num);
    printf("The Multiplication table of %d \n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d= %d \n", num, i, i * num);
    }
}