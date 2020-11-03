#include <stdio.h>

int main()
{
    int num1=0,num2=0,Sum=0;
    printf("Enter values for num1 and num2:");//For entering two numbers first enter first number then either use spacebar or enter then give second value
    scanf("%d %d",&num1,&num2);

    Sum=num1+num2;
    printf("The Sum of %d and %d is %d \n",num1,num2,Sum);

    int Difference=0,Product=0,Divison=0;

    Difference=num1-num2;
    printf("The Difference of %d and %d is %d \n",num1,num2,Difference);

    Product=num1*num2;
    printf("The Product of %d and %d is %d \n",num1,num2,Product);

    Divison=num1/num2;//Gives quotient
    printf("The Divison of %d and %d is %d\n",num1,num2,Divison);

    int Modulus=0;//Modulus gives remainder of divison unlike Divison gives quotient
                   // Modulus is denoted by % symbol
    Modulus=num1%num2;
    printf("The Modulus of %d and %d is %d",num1,num2,Modulus);
    return 0;
}
