 #include<stdio.h>
 int main()
 {
     char lower;
     printf("Enter lower case letter: ");
     scanf("%c",&lower);
     printf("The upper case letter: %c",lower-32);
     return 0;
 }
