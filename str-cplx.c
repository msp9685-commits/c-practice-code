#include <stdio.h>

typedef struct complex{
    int r;
    int im;
}cmp;

void display(struct complex arr1[3]);

int main(){
    cmp c1;
    printf("enter real part:");
    scanf("%d", &c1.r);

    printf("enter real part:");
    scanf("%d", &c1.im);

    cmp c3 = {c1.r, c1.im};
    struct complex arr1[3];
    {
        arr1[0].r = c1.r;
        arr1[0].im = c1.im;
    };
    printf("%d + %di\n", arr1[0].r, arr1[0].im);
    
    (display(arr1));

    printf("Complex number: %d + %di\n", c3.r, c3.im);

    return 0;
}

void display(struct complex arr1[3]){
    printf("%d + %di\n", arr1[0].r, arr1[0].im);

}
