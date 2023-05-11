#include <stdio.h>
int main()
{
    int x;
    char s[100];
    printf("Enter Your Name:\n");
    gets(s);
    for (x = 0; s[x]!= '\0'; x++)
    {
    }
    printf("length of the string is %d", x);
    return 0;
}