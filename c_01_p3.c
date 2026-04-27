/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit*/
#include <stdio.h>

int main(){
    float c = 45.2;
    float f;
    f = (9.0/5 * c) + 32;
    /*If both operands are integers → result is integer
    If at least one is float → result is float*/
    //f = (9*c/5) + 32;
    printf("Given celsius temprature (i.e is %.2f) in fahrenheit equal to %.2f", c, f);

    return 0;
}

