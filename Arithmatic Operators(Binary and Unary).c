#include <stdio.h>

int main()
{
    int a=3,b=2,c=0;
    c=a+b;//+ is a binary operator as it uses two operands a and b
    printf("The addition(+) operation on a and b results %d \n",c);

    c=a-b;//- is a binary operator as it uses two operands a and b
    printf("The subtraction(-) operation on a and b results %d \n",c);

    c=a*b;//* is a binary operator as it uses two operands a and b
    printf("The multiplication(*) operation on a and b results %d \n",c);

    c=a/b;// /-is a binary operator as it uses two operands a and b
    printf("The divison(/) operation on a and b results %d \n",c);/*Here the output will be 1 thought 3/2=1.5 as %d is an integer format specifier
                                                                  so it will give the number without the decimal part*/
    c=a%b;// %- is a binary operator as it uses two operands a and b
    printf("The modulus(%) operation on a and b results %d \n",c);

    a=a++;// ++ is an unary operator as it uses only one operator
    printf("The result of increment in a is %d \n",a);

    b=b--;//-- is an unary operator as it uses only one operator
    printf("The result of decrement in b is %d",b);
    return 0;
}
