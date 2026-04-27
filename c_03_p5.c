/*Write a program to determine whether a character entered by the user is
lowercase or not*/
#include <stdio.h>

int main(){
    char c;
    printf("enter character ");
    scanf("%c", &c);
    if(c >= 'a' && c<= 'z'){
        printf("lowercase");
    }
    else{
        printf("uppercase");
    }
    return 0;

}