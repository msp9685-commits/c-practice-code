#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("namefile.txt", "w");
    for(int i =0;i<2; i++){
    int salary;
    printf("enter num:");
    scanf("%d", &salary);

    char name[10];
    printf("enter name:");
    scanf("%s", &name);
    fprintf(fptr, "Name[%d]: %s, Salary[%d]: %d\n", i+1, name, i+1, salary);
    }
    fclose(fptr);
    return 0;
}