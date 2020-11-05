#include <stdio.h>

int main()
{
    int num=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if((num%2==0) && (num%3==0))/*Here we are using &&(And) operator as we need the
                                number should be divisible by both 2 and 3 simultaneously*/
    {
        printf("The number %d is divisible by both 2 and 3",num);
    }
    else
    {
        printf("The number %d is not divisible by both 2 and 3",num);
    }
    return 0;
}
