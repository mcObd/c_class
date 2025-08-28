#include <stdio.h>
#include <stdlib.h>

int main2(){
    // Arithmetic
    int exp1 = 10 * 10 + 5 - 6;
    printf("%d\n", exp1); // Output: 99

    // Relational
    int exp2 = 10 >= 8;
    printf("%d\n", exp2); // Output: 1 (true)

    // Logical
    int exp3 = (2 > 5) && (7 < 15);
    printf("%d\n", exp3); // Output: 0 (false)




//classwork

char ch = 'c';
int i = 10;
float f = 2.5;
double d = 3.65;

double result = (ch/i) + (f*d) - (f+i);
printf("%lf",result);


    return 0;
}
