#include <stdio.h>
void changevalue(int *a)
{
    *a = 325;
}
int main()
{
    int a = 35;
    printf("the value of a is %d \n", a);
    changevalue(&a);
    printf("the value of a is %d \n", a);
    return 0;
}