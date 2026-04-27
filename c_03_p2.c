/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user*/
#include <stdio.h>

int main(){
    int m1;
    printf("enter marks ");
    scanf("%d", &m1);

    int m2;
    printf("enter marks ");
    scanf("%d", &m2);

     int m3;
    printf("enter marks ");
    scanf("%d", &m3);
    float percent;
    percent = (m1+m2+m3)/3.0;

    if(percent >= 40 && m1 >= 33 && m2 >= 33 && m3 >= 33){
        printf("you are pass with %.2f percentage", percent);
    }
    else{
        printf("you failed");
    }
    return 0;
}