/*Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height*/
/*#include <stdio.h>

int main(){
    int r = 4;
    float area = 3.14 * r * r;
    printf("The area of circle with given radius is %f :", area);

    return 0;
}*/

#include <stdio.h>

int main(){
    int r = 4;
    int h = 5;
    float volume = 3.14 * r * r * h;
    printf("The volume of cyclinder with given radius and height is %f :", volume);

    return 0;
}