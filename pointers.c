#include <stdio.h>
#include <stdlib.h>

int main(){
    // pointers
    int var1=2026, temp;
    int *var2;
    var2= &var1;
    int *var3 = var2; //double pointer
    printf("var2 = %d\n", *var2);
    printf("var3 = %d\n", *var3);
    // temp = *var2;
    // printf("%d",temp);
    return 0;
}