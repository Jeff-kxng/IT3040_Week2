/*
Bài 2.1.  Viết hàm tính độ dài cạnh huyền của tam giác theo độ hai cạnh góc vuông.
For example:
Input
3 4
 Result
z = 5.00
 */
// Sok Sokong 20211005
#include <stdio.h>
#include <math.h>
float get_hypotenuse(float x, float y) {
    float z = sqrt(x*x + y*y);
    return z;
}

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z);

    return 0;
}