/*
 Bài 2.4. Viết các hàm tính lập phương của số nguyên và số thực.
 Input
 Result
 3 5.2
 Int: 27
 Double: 140.61
 */
// Sok Sokong 20211005
#include <stdio.h>
int ham(int x) {
    return x*x*x;
}
double ham(double x){
    return x*x*x;
}

int main() {
    int n;
    double f;
    scanf("%d %lf", &n, &f);

    printf("Int: %d\n", ham(n));
    printf("Double: %.2lf\n", ham(f));

    return 0;
}
