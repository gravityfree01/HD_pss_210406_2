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

    pritnf("�������� �߷��� �ּ���, �������� �Է��ϼ���\n");
    scanf_s("%d", &d);
    fseek(stdin, 0, SEEK_END);

    float r = d / 2;

    printf("�ѷ� %.1f ���� %f\n", d * PI, (d / 2) * PI);
    //printf("���� ���� = %f, ���� �ѷ� = %f\n", roundOfCircle, areaOfCircle);
    fgetc(stdin);
}