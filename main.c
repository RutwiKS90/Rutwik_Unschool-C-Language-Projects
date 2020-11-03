#include <stdio.h>

int main()
{
    printf("Hello world!");
    printf("This sentence is printed on same line with Hello world! without space");

    puts("This line will be printed with first line but next sentence will be printed below");
    puts("This line will be printed on next line");

    printf("This Line printed below \n");
    printf("This line printed below due to \\n in above line \n");//We use \\n to print \n

    printf("If we use 2 \\n in this line then what happen to next line lets see?\n\n");
    printf("This line is printed leaving one more line above \n");

    puts("Similarly if we use \\n with puts then lets see what happens?\n");
    printf("This line is printed below leaving one line from above");

    return 0;
}
