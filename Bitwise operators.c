#include <stdio.h>

int main()
{
    unsigned char a=5,b=9;/*5-00000101,9-00001001*/
    printf("a&b=%d \n",a&b);/*&-AND 1&1=1,1&0=0,0&0=0,0&1=0
                      00000101&00001001=00000001=1*/
    printf("a|b=%d \n",a|b);/*|-OR 1|1=1,1|0=1,0|0=0,0|1=1
                      00000101 | 00001001=00001101=13*/
    printf("~a=%d \n",a=~a);/*~ negation(NOT) ~1=0,~0=1
                      ~5=~00000101=11111010=250*/
    printf("a<<1=%d \n",a<<1);//<< left shift of bits of left operand by times of right operand
    printf("a>>1=%d \n",a>>1);//>> right shift of bits similar way to left shift
    return 0;
}
