#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 int main6(){
// int count = 1;
// while (count <= 10) {
//     // printf("%d\n", count);
//     count++;
// }

//   int users_trials = 5;
//   int count = 0;
//   int user_pin;
//   int correct_pin = 2025;
//   while (count < 5)
//   {
//     printf("Enter Your Pin: ");
//     scanf("%d", &user_pin);
//     if (user_pin == correct_pin)
//     {
//         printf("Correct pin Logging In...\n");
//     }
//     else{
//         printf("Wrong pin entered, try again\n");
//     }
//     count++;
//     if (count >= 5){
//         printf("You have 0 trials left\n");
//     }
    
// //   }
//   int num1, num2;
//              num2 = 0;
// 	do
// 	{
// 	     printf( "\nEnter a number : ");
// 	     scanf("%d",&num1);
// 	     printf(" No. is %d",num1);
// 	     num2++;
// 	} while (num1 != 0);
// 	printf ("\nThe total numbers entered were %d",--num2);

        int num;
		for(num = 1; num <=100; num++)
		{
			if(num % 9 == 0) {
				exit(90);
            }
			printf("%d\t",num);
		}


    return 0;
 }