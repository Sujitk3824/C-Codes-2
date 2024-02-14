#include<stdio.h>
/// @brief 
/// @return 
float tekenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}

int main()
{ 
    int c;
    c= tekenumber();
    printf("The entered number is %d",c);
    return 0;


}