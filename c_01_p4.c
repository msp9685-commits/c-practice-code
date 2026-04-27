/*Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest*/

#include <stdio.h>

int main(){
    float SI;
    float p;
    printf("Enter principle amount ");
    scanf("%f", &p); // scanf doesn't supporta .2f only %f
    int t;
    printf("Enter time period in months ");
    scanf("%d", &t);
    float r = 7.2;
    SI = (p * t * r)/100.0;
    printf("Simple interest on %.2f rupees for %d months at a rate of %.2f is %.2f :", p, t, r, SI);

    return 0;
}