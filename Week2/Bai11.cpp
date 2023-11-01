/*
 Bài tập 11: Tính tích hai đa thức
Cho 2 đa thức A(x) và B(x) tương ứng có bậc NN và MM. Hãy tính ma trận tích C(x) = A(x) * B(x)
có bậc N+M−1N+M−1.
Input: Gồm 2 dòng biểu diễn các đa thức A(x) và B(x), mỗi dòng
• Số đầu tiên NN là bậc của đa thức;
• N+1N+1 số nguyên tiếp theo, số thứ i là hệ số của xi−1xi−1.
Output: Một số nguyên duy nhất là XOR của các hệ số của đa thức C(x).
Ví dụ:
Input:
3 83 86 77 15
4 93 35 86 92 49
Output:
20731
Giải thích: các hệ số của đa thức kết quả lần lượt là 7719, 10903, 17309, 19122, 19126, 12588,
5153, 735.
Giới hạn:
• Các hệ số của các đa thức đầu vào có trị tuyệt đối nhỏ hơn 100.
• Có 5 tests, test thứ i có bậc của các đa thức đầu vào không quá 10i10i.
 */
// Sok Sokong 20211005
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> A[i];
    }

    cin >> M;
    vector<int> B(M + 1);
    for (int i = 0; i <= M; i++) {
        cin >> B[i];
    }

    int C_size = N + M + 1;
    vector<int> C(C_size, 0);

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            C[i + j] += A[i] * B[j];
        }
    }

    int result = 0;
    for (int i = 0; i < C_size; i++) {
        result ^= C[i];
    }

    cout << result << endl;

    return 0;
}
