//1316
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cnt = 0;;
    cin >> n;
    vector<int> arr;
    string word;

    for (int i = 0;i < n;i++) {
        cin >> word;
        arr.assign(26, -1); //알파벳 소문자 26개

        for (int k = 0;k < word.length();k++) { 

            if (arr[word[k] - 'a'] >= 0) {
                cnt++;
                break;
            }

            if (word[k] == word[k + 1]) {
                continue;
            }
            else { //새로운 알파벳이 나오면 +1을 해준다
                arr[word[k] - 'a'] += 1;
            }
        }

    }

    cout << n - cnt << endl;

}