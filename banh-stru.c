#include <stdio.h>
#include <string.h>

struct bank{
    int acc_num;
    float balance;
    char name[15];
    int dob;
    int atm_pin;
};
int main(){
    struct bank p1;
    p1.acc_num = 656798;
    p1.balance = 1;
    strcpy(p1.name, "ayush");
    p1.dob = 1405;
    p1.atm_pin = 0001;

    printf("%d %f %d %d %s", p1.acc_num, p1.balance, p1.atm_pin, p1.dob, p1.name);


    return 0;
}