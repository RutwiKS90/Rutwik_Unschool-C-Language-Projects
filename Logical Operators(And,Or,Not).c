#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("And operation on both values 1 and 1 is %d\n",1&&1);//For AND operator to be true both statements number needs to be true(1) if any one of them be false(0) then result is 0
    printf("And operation on both values 5 and 4 is %d\n",5&&4);
    printf("And operation on both values 1 and 0 is %d\n",1&&0);
    printf("And operation on both values 5 and 0 is %d\n",5&&0);
    printf("And operation on both values 0 and 1 is %d\n",0&&1);
    printf("And operation on both values 0 and 5 is %d\n",0&&5);
    printf("And operation on both values 0 and 0 is %d\n\n",0&&0);

    printf("Or operation on both values 1 and 1 is %d\n",1||1);//For OR operator to be true both or any one of them must be true if both are false(0) then result is false(0)
    printf("Or operation on both values 5 and 4 is %d\n",5||4);
    printf("Or operation on both values 1 and 0 is %d\n",1||0);
    printf("Or operation on both values 5 and 0 is %d\n",5||0);
    printf("Or operation on both values 0 and 1 is %d\n",0||1);
    printf("Or operation on both values 0 and 5 is %d\n",0||5);
    printf("Or operation on both values 0 and 0 is %d\n\n",0||0);

    printf("Not operation on value 1 is %d\n",!1);
    printf("Not operation on value 5 is %d\n",!5);
    printf("Not operation on value 0 is %d\n",!0);

    printf("Not operation on Not operation value 1 is %d\n",!!1);
    printf("Not operation on Not operation on Not operation value 1 is %d\n",!!!1);

    return 0;
}
