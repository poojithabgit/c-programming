#include<stdio.h>
int main()
{
    float n1,n2,n3,sum,avg;
    printf("enter three numbers");
    scanf("%f%f%f",n1,n2,n3);
    sum=n1+n2+n3;
    printf("\nSum is %f",sum);
    avg= sum/3;
    printf("\navg if %f",avg);
    return 0;
}