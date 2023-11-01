/*
 Bài 2.3. Viết chương trình yêu cầu nhập giá trị cho số nguyên x nhỏ hơn 100. In ra giá trị ax2+bx+c  với a, b, c định sẵn.
 Input
 5 3 7 8
 Result
 a=2, b=1, c=0: 55
 a=3, b=1, c=0: 80
 a=3, b=7, c=0: 110
 a=3, b=7, c=8: 118
 */
#include <stdio.h>
#include <bits/stdc++.h>
// Sok Sokong 20211005
using namespace std;
int value(int x, int a=2, int b=1, int c=0){
    int S = a*x*x + b*x + c;
    return S;
}

int main(){
    int x;
    scanf("%d", &x);
    int a = 2, b =1, c = 0;
    cin >> a >> b >> c;
    printf("a=2, b=1, c=0: %d\n", value(x));
    printf("a=%d, b=1, c=0: %d\n", a, value(x, a));
    printf("a=%d, b=%d, c=0: %d\n", a, b, value(x, a, b));
    printf("a=%d, b=%d, c=%d: %d\n", a, b, c, value(x, a, b, c));

    return 0;
}