#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any letter: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("this is the small letter\n");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("this is the capital letter\n");
    }
    else{
        printf("not a letter");
    }
}
