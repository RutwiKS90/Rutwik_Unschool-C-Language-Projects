#include <stdio.h>

int main()
{
    float percentage=0;
    printf("Enter your percentage:");
    scanf("%f",&percentage);
    if(percentage>=50)
    {
        printf("PASS");
    }
    else
    {
        printf("FAILED");
    }
    return 0;
}
