/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30*/
#include <stdio.h>

int main(){
    //while(1){}
    float tax;
    float income;
    printf("enter your income ");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000){
        tax = (income * 5)/100;
        printf("tax paide by you is %.2f\n", tax);
    }
    else if (income >= 500000 && income <= 1000000){
        tax = (income * 20)/100;
        printf("tax paide by you is %.2f\n", tax);
    }
    else if (income > 1000000){
        tax = (income * 30)/100;
        printf("tax paide by you is %.2f\n", tax);
    }
    else{
        printf("you dont pay tax\n");
    }

    return 0;

}