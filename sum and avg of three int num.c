#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("sum= %d\n",sum);
    printf("avg= %f\n",avg);
    return 0;
}
