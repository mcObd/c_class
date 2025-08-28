#include <stdio.h>
#include <stdlib.h>


int main(){
    // Arrays

    // Declare an array
    // datatype name[size]
    int num[5];
    // indexes 0 - size
    /*
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }
    */

    // Example 2
    /*
    int array_size, highest, lowest, sum=0;
    printf("How many students are you entering scores for? ");
    scanf("%d", &array_size);
    int student_scores[array_size];
    float avg;
    // collect the student scores
    
    for (int i = 0; i < array_size; i++){
        printf("Enter the %d student score in the exam: ", i+1);
        scanf("%d", &student_scores[i]);  
        sum += student_scores[i];
    }
    
    // Display all of the scores the teacher entered
    printf("The students scores entered below are; \n");
    highest =student_scores[0];
    lowest = student_scores[0];
    for (int j = 0; j < array_size; j++)
    {
        if (student_scores[j] > highest)
        {
            highest = student_scores[j];
        }else{
            lowest = student_scores[j];
        }
        
       printf("Student %d = %d\n", j+1, student_scores[j]);
    }
    
    printf("Highest Score = %d\n", highest);
    printf("Lowest Score = %d\n", lowest);
    avg = sum / array_size;
    printf("Average student score= %.2f\n",avg);
    */

    // Example 3 : Multi dimensional array
    int ary[3][3]=
            {
                {1,2,3},
                {4,5,6},
                {7,8,3}
		    };
    
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            printf("%d ", ary[row][column]);
        }
        printf("\n");
    }
    

    return 0;
}