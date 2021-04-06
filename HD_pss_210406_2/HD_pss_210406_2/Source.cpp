#include<stdio.h>

void main() {
    /*float PI = 3.141592;
    int diameter = 10;
    float radius = diameter / 2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;
    */

    int d = 0;
    float roun = 0;
    float n = 0;

    float PI = 3.141592

    pritnf("지름값을 읿력해 주세요, 정수값을 입력하세요\n");
    scanf_s("%d", &d);
    fseek(stdin, 0, SEEK_END);

    float r = d / 2;

    printf("둘레 %.1f 넓이 %f\n", d * PI, (d / 2) * PI);
    //printf("원의 넓이 = %f, 원의 둘레 = %f\n", roundOfCircle, areaOfCircle);
    fgetc(stdin);
}