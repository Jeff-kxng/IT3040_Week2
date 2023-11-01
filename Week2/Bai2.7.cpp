/*
 Bài 2.7. Viết hàm tính tổng các phần tử trong hai mảng.
 Yêu cầu sử dụng function template để cho phép hàm làm việc với các mảng số nguyên lẫn số thực.
 */
// Sok Sokong 2021005
#include <iostream>
using namespace std;
template <typename T>

T arr_sum(T a[], int n, T b[], int m){
    T sum;
    for(int i=0; i<n; i++)
        sum += a[i];
    for(int i=0; i<m; i++)
        sum += b[i];
    return sum;
}

int main() {
    int val;
    cin >> val;

    {
        int a[] = {3, 2, 0, val};
        int b[] = {5, 6, 1, 2, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    {
        double a[] = {3.0, 2, 0, val * 1.0};
        double b[] = {5, 6.1, 1, 2.3, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }

    return 0;
}