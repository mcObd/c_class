#include <stdio.h>
#include <stdlib.h>


int main(){
    // File Handling
    FILE *fp;
    fp = fopen("sample.txt", "w");
    char str1[] = "Session 12\n";
    fprintf(fp, str1);
    fprintf(fp, "File Handling\n");
    fclose(fp);
    // save your name, id, elective to a file
    // with the name bio_data.txt


    return 0;
}