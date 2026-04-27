#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("harry.txt", "w");
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    int arr[10];
    for (int i =1; i < 11; i++)
    {
        arr[i-1]= num * i;
        printf("%d\n", arr[i-1]);
        fprintf(fptr, "%d\n", arr[i-1]);
    }
    
    
    fclose(fptr);
    return 0;
}