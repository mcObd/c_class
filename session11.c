#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{ 
int id;
char name[50];
float salary;
};


int main11(){
    struct employee e1, e2;
    e1.id = 9202;
    strcpy(e1.name, "Harry");
    e1.salary = 300000.00;

    printf("ID:%d\nName: %s\nSalary: %.2f", e1.id, e1.name, e1.salary);

    // Class work
    /* 
    Create a stucture called student with the following members;
    name, roll_num and marks;
    then further create 3 struct variables and assign them values
    based on the student struct.
    And finally display all the values of each student struct
    */
    return 0;
}