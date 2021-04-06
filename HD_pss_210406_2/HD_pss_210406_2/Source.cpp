#include<stdio.h>

void main() {
    float PI = 3.141592;
    int diameter = 10;
    float radius = diameter / 2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;

    printf("원의 넓이 = %f, 원의 둘레 = %f\n", roundOfCircle, areaOfCircle);
    fgetc(stdin);
}