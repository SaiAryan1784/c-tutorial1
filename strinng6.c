#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "str";
    char str2[] = "newstr";

    printf("%s", str2);
    strcpy(str2, str1);
    printf("%s", str2);
}