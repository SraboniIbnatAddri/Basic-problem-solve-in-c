#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any lower case letter: ");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("upper case letter: %c",upper);
}
