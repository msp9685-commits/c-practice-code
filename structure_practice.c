#include <stdio.h>
#include <string.h>
struct vector{
    int x;
    int y;

};

int sumVector(struct vector v, v);

int sumVector(struct vector v, v){
    int sumvector = (v.x + v.x, v.y + v.y);
    return sumvector;
}

int main(){
    struct vector v1;
    v1.x = 4;
    v1.y = 6;
    struct vector v2;
    v2.x = 5;
    v2.y = 8;

    printf("%d %d", v1.x, v1.y);
    printf(sumVector(v1, v2));


    return 0;
}