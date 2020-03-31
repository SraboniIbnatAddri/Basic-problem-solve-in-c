//C=(f-32)/1.8
#include<stdio.h>
int main()
{
    float C,f;
    printf("Enter fahrenheit: ");
    scanf("%f",&f);
    C=(f-32)/1.8;
    printf("Centigrade: %.2f",C);

}
