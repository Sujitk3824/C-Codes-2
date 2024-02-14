#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
  
    // char str[] = {'s', 'u', 'j', 'i', 't', '\0'};
    // char str[10] = "sujit";
    printf("Enter the character\n");
    gets(str);   
    printf("Using custom function printstr \n");
    printstr(str);
    printf("Using printf\n %s\n", str);
    printf("Using puts:\n");
    puts(str);
    return 0;
}