/*
 Bài tập 12: Map Sort Hôm nay, cô giáo giao cho An một câu hỏi hóc búa.
 Cô cho một danh sách với mỗi phần tử có dạng và yêu cầu An sắp xếp danh sách đó giảm dần theo giá trị value.
 Nếu 2 phần tử có value giống nhau thì sắp xếp giảm dần theo key. Hãy viết một chương trình sử dụng hàm nặc danh để giúp An làm bài tập.
 Input: Danh sách đầu vào. Mỗi dòng ghi một cặp giá trị key, value cách nhau bởi dấu cách (|key| ≤109≤109, |value| ≤109≤109).
 */
// Sok Sokong 20211005
#include<bits/stdc++.h>
using namespace std;
struct element {
    int key;
    int value;
};

vector<element> lst;
void input(){
    int tmp1, tmp2;
    while(cin >> tmp1 && cin >> tmp2){
        element tmp;
        tmp.key = tmp1;
        tmp.value = tmp2;

        lst.push_back(tmp);
    }
}

void print(){
    for(int i=0; i<lst.size(); i++){
        cout << lst[i].key << " " << lst[i].value << endl;
    }
}

int main(){
    input();
    sort(lst.begin(),lst.end(),[] (element a, element b){
        if(a.value > b.value) return true;
        else if (a.value < b.value) return false;
        else {
            return a.key >= b.key;
        }
    });
    print();
}
