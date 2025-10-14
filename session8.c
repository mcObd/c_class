#include <stdio.h>
#include <stdlib.h>

int main8(){
    //Pointers
    //Syntax : data_type *name;
  /*  int var1 = 2025, temp;
    int *var2;
    var2 = &var1; 
    int *var3 = var2; // double pointer
  //  printf("var2 = %d\n", *var2);
  //  printf("var3 = %d\n", *var3);
   // temp = *var2;
   // printf("%d", temp);
   */

   //Addition and Subtraction of Pointers
/*   int var, *ptr_var;
   ptr_var = &var;
   var = 500;
   printf("Before increment: %d\n", ptr_var);
   ptr_var++; //adds 4 bytes because it was declared as int
   printf("After increment: %d\n", ptr_var);
*/
  // Pointers with arrays
/*    int random_array[7] = {3, 7, 8, 4, 1, 9, 5};
    int *ptr_array = random_array;
    // ptr_array = ptr_array + 4;
    // printf("%d", *ptr_array);
*/
    // i. change the value of 7 to 2 using pointer arithmetics
    /*
    *(ptr_array + 1) = 2;
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", random_array[i]);
    }
    */
    // ii. reduce the value of 7 to 2 using pointer arithmetics
   /* *(ptr_array + 1) -= 5;
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", random_array[i]);
    }*/

    

    int *ptr_malloc, total_no;
    printf("How many elements do you want to"
          " store in the array? ");
    scanf("%d", &total_no);

    ptr_malloc = malloc(total_no * sizeof(int));

    //Store values in the memory block created by malloc
    for (int i = 0; i < total_no; i++)
    {
      printf("Enter element %d :", i+1);
      scanf("%d", ptr_malloc+1);
    }
    //Displaying the vlaues stored in the memory block
    for (int i =0; i < total_no; i++)
    {
      printf("%d\n", *(ptr_malloc+1));
    }

    //realloc() to increase the size of memory created by malloc()
    int additional_no = 0;
    printf("You want to add how many more elements? ");
    scanf("%d", &additional_no);
    additional_no += total_no;
    ptr_malloc = realloc(ptr_malloc, additional_no*sizeof(int));

    //Store additional values in the memory block created by realloc
    for (int i = total_no; i < additional_no; i++)
    {
      printf("Enter element %d: ", ++total_no);
      scanf("%d", ptr_malloc+1);
    }

    //Displaying all of the values stored in the memory block
    for (int i =0; i < additional_no; i++)
    {
      printf("%d\n", *(ptr_malloc+i));
    }

    //calloc()
    int *ptr_calloc = calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
      printf("%d\n", *(ptr_calloc+i));
    }
    return 0;
}