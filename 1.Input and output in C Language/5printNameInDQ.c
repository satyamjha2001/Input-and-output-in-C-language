#include <stdio.h>
int main()
{
    int x;
    char s[100];
    printf("Enter Your Name:\n");
    gets(s);
    printf("\"Hello, %s\"", s);
    return 0;
}