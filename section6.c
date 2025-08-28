#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 int main5(){
     //LOOPS
    /* for(int start; start <= 10; start++){
        printf("%d\n", start);
     }*/
 int Num;
 printf("enter number");
scanf("%d", &Num);
 for (int multiply = 1; multiply <= 12; multiply++) {
    printf("\n%d*%d = %d",Num, multiply, Num * multiply);
 }


     return 0;
}
