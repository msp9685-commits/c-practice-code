#include <stdio.h>

int main(){
    FILE *fptr = fopen("ayush.txt", "r");
int num;
fscanf(fptr, "%d", &num);
fclose(fptr);

num = num * 2;

fptr = fopen("ayush.txt", "a");
fprintf(fptr, "%d\n", num);
fclose(fptr);
}

    