#include<stdio.h>
int main()
{
    char ch;
    int a,b,z;
    printf("Enter an operator ('+,-,*,/'):");
    scanf("%c" ,&ch);
    printf("enter two numbers :");
    scanf("%d%d" ,&a,&b);
    switch(ch)
    {
        case '+':
            z=a+b;
            break;
        case '-':
            z=a-b;
            break;
        case '*':
             z=a*b;
             break;
        case '/':
            z=a/b;       
            break;
    }
    printf("%d" ,z);
    return 0;
}