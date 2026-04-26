#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
}B;

int main(){
    B e1;
    e1.code = 56;
    B *ptr;
    ptr = &e1;
    printf("%d", ptr->code);

    return 0;
}