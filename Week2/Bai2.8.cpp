/*
 Bài 2.8. Viết hàm so sánh cho thuật toán sắp xếp.
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// Sok Sokong 20211005
using namespace std;

int main() {

    int val1, val2;

    cin >> val1 >> val2;
    vector< vector<int> > a = {
            {1, 3, 7},
            {2, 3, 4, val1},
            {9, 8, 15},
            {10, val2},
    };

    sort(a.begin(), a.end(), [](vector<int> p, vector<int> q)->bool{
        return accumulate(p.begin(), p.end(), 0) > accumulate(q.begin(), q.end(), 0);
    });

    for (const auto &v : a) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}