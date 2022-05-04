#include<stdio.h>
int main()
{
    float radius,C,D,A;
    printf("Enter the radius:");
    scanf("%f" ,&radius);
    C=2*3.14*radius;
    D=2*radius;
    A=3.14*radius*radius;
    printf("C=%f \n" ,C);
    printf("D=%f \n" ,D);
    printf("A=%f \n" ,A);
    return 0;
}
