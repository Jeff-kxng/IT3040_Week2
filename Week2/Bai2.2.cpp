/*
 Bài 2.2. Viết hàm hoán vị vòng tròn 3 biến a, b, c. Sau khi thực hiện hàm, các biến a, b, c tương ứng nhận các giá trị mới b, c, a.
 Input
 3 4 5
 Result
 Before: 3, 4, 5
 After: 4, 5, 3
 */
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
// Sok Sokong 20211005
void swap(int &x, int &y, int &z) {

    int tmp = x;
    x = y;
    y = z;
    z = tmp;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    printf("Before: %d, %d, %d\n", x, y, z);
    swap(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);
    return 0;
}
