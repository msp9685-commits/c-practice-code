// c program to calculate area of rectangle
/*
#include <stdio.h>

int main(){
    int a = 5;
    int b = 4;
    int area = a*b;
    printf("The area of reactangle with given sides is %d :", area);

    return 0;
}*/
// Repeating same program by taking input from user
#include <stdio.h>

int main(){
    int a;
    printf("Enter Length of rectangle ");
    scanf("%d", &a);
    int b;
    printf("Enter breadth of rectangle ");
    scanf("%d", &b);
    int area;
    area = a*b;

    printf("The area of reactangle with length %d and breadth %d is %d", a, b, area);

    return 0;
}