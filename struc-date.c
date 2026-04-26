#include <stdio.h>

typedef struct dob{
    int date;
    int month;
    int year;
}format;

int check(format d){
    if (d.date >= 32)
    printf("invalid date");
    if (d.month >= 13)
    printf("inavlid month");
    if (d.year >= 2026)
    printf("invalid year");
}

int main(){
    format d1;
    d1.date = 30;
    d1.month = 12;
    d1.year = 2025;
    printf("%d / %d / %d", d1.date, d1.month, d1.year);
    check(d1);
    return 0;
}