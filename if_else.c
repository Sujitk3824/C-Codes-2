#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter the the marks in science \n");
    scanf("%d", &i);
    printf("Enter the the marks in Maths \n");
    scanf("%d", &j);

    if ((j >= 35) && (i >= 35))
    {
        printf("You are passed in Science & maths\n");
        printf("Your gift is 45\n");
    }
    else if (i >= 35)
    {
        printf("You are passed in Science\n");
        printf("Your gift is 15\n");
    }
    else if (j >= 35)
    {
        printf("You are passed in maths \n");
        printf("Your gift is 15\n");
    }

    return 0;
}