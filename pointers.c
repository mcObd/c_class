#include <stdio.h>
#include <stdlib.h>


int main(){
    // Pointers
    // Syntax : data_type *name;
    // int var1=2025, temp;
    // int *var2;
    // var2= &var1;
    // int *var3 = var2; // double pointer
    // printf("var2 = %d\n", *var2);
    // printf("var3 = %d\n", *var3);
    // temp = *var2;
    // printf("%d", temp);
    /*
    int var1 = 30, var2 = 40;
    int *ptr_var1, *ptr_var2;
    ptr_var1 = &var1;
    ptr_var2 = &var2;
    *ptr_var2 = *ptr_var1;
    printf("%d\n", *ptr_var1);
    printf("%d\n", *ptr_var2);
    */

    // Additon and subtraction of pointers
    /*
    int var, *ptr_var;
    ptr_var = &var;
    var = 500;
    printf("Before increment: %d\n", ptr_var);
    ptr_var--;
    printf("After increment: %d\n", ptr_var);
    */

    // Pointers with arrays
    int random_array[7] = {3, 7, 8, 4, 1, 9, 5};
    int *ptr_array = random_array;
    // ptr_array = ptr_array + 4;
    // printf("%d", *ptr_array);
    // i. change the value of 7 to 2 using pointer arithmetics
    /*
    *(ptr_array + 1) = 2;
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", random_array[i]);
    }
    */
    // ii. reduce the value of 7 to 2 using pointer arithmetics
    *(ptr_array + 1) -= 5;
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", random_array[i]);
    }
    return 0;
}