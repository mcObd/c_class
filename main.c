#include <stdio.h>
#include <stdlib.h>

int main_one()
{
    /*
    printf("Hello world!\n");
    printf("%d\n",2002);
    printf("%c\n",'d');
    printf("%f\n",2.234);
    */
    // Variable
    const int year = 2025;
    printf("current Year:%d\n",year);

    char character = 'y';
    printf("character is :%c\n",character);

    float floatvariable = 4.56;
    printf("floatvariable is :%.2f\n",floatvariable);

    return 0;
}
// Variables

const int year123 = 2025;
 char letter = 'A';
 float pi = 3.142;

   #include <stdio.h>

int main1()
{
    const int year123 = 2025;
    char letter = 'A';
    float pi = 3.142;

    printf("year123 is %lu bytes\n", sizeof(year123));
    printf("letter is %lu bytes\n", sizeof(letter));
    printf("pi is %lu bytes\n", sizeof(pi));

    return 0;
}

