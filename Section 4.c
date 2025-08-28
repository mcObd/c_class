#include <stdio.h>
#include <stdlib.h>
#define year 2025
int main3(){
    // Inputs and Outputs functions

    //printf()
   // printf("%d",year);

    //scanf()
    //Example
    /*
    int birthYear;
    printf("Which year were you born?");
    scanf("%d",&birthYear);
    int age = year - birthYear;
    printf("Since you were born in the year %d you are %d years old",birthYear,age);*/

    int a;
    int b;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);

    float total = (float) a + b;
    printf("%d + %d = %.2f",a,b,total);

    char letter ;
    printf ("\nP1ease enter any character : ");
    letter = getchar ();
    printf ("\nThe character entered by you is %c",letter) ;

    putchar('5');

    putchar('\t');putchar('\t');putchar('\t');putchar('\t');putchar('o'); putchar('\n');
    putchar('\t');putchar('\t');putchar('\t');putchar('L'); putchar('\n');
    putchar('\t');putchar('\t');putchar('L'); putchar('\n');
    putchar('\t');putchar('E'); putchar('\n');
    putchar('H');
    return 0;
}
