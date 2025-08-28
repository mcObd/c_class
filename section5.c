#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main4() {
    // conditional statement

    // example of if statements
/*
    int user_input; // Added missing semicolon
    printf("Enter any number: ");
    scanf("%d", &user_input);

    if (user_input % 2 == 0) {
        printf("The number entered is Even!\n");
    } else {
        printf("The number entered is Odd\n");
    } */


/*
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46

int score;
printf("What is your score in the C exam?");
scanf("%d", &score);
if(score >= 75 && score <= 100)
printf("Excellent! Your Grade is A");
else if(score >= 60 && score <= 74)
printf("Great! Your Grade is B");
else if(score >= 50 && score <= 59)
printf("Cool! Your Grade is C");
else if(score >= 46 && score <= 49)
printf("Fair! Your Grade is D");
else if(score >= 40 && score <= 45)
printf("Poor! Your Grade is E");
else if(score >= 0 && score <= 39)
printf("Very Poor! Your Grade is F");
else
printf("Invalid exam score!");


 int x, y;
    x = y = 0;

    printf("Enter Choice (1 - 3): ");
    scanf("%d", &x);

    if (x == 1) {
        printf("\nEnter value for y (1 - 5): ");
        scanf("%d", &y);

        if (y <= 5) {
            printf("\nThe value for y is: %d\n", y);
        } else {
            printf("\nThe value of y exceeds 5\n");
        }
    } else {
        printf("\nChoice entered was not 1\n");
    }

    char grade;

    printf("Input your grade: ");
    scanf(" %c", &grade); // note the space before %c to skip whitespace

    grade = toupper(grade); // convert to uppercase

    switch (grade) {
        case 'A':
            printf("Excellent!");
            break;
        case 'B':
            printf("Good!");
            break;
        case 'C':
            printf("Cool!");
            break;
        case 'D':
            printf("Fair!");
            break;
        case 'E':
            printf("Poor!");
            break;
        case 'F':
            printf("Fail!");
            break;
        default:
            printf("Invalid grade!");
    }*/



int firstNumber,secondNumber;
char Operator ;

printf("Input your Number:");
scanf(" %d", &firstNumber);

printf("Input your Number:");
scanf(" %d", &secondNumber);

printf("Input your operator:");
scanf(" %c", &Operator);

switch (Operator){

case '+':{
 printf("%d", firstNumber + secondNumber);
}
break;

case '-':{
 printf("%d", firstNumber - secondNumber);
}
break;

case '/':{
 printf("%d", firstNumber / secondNumber);
}
break;

case '*':{
 printf("%d", firstNumber * secondNumber);
}
break;

}





    return 0;
}
