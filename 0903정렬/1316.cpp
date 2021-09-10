//1316
#include <iostream>
#include <vector>
using namespace std;

bool solution(string word) {
    vector<bool> arr; 
    arr.assign(26, false);

    for (int i = 0;i < word.length();i++) {

        if (word[i] == word[i - 1]&&i>0)
            continue;

        if (arr[word[i] - 'a'])
            return false;

        arr[word[i] - 'a'] = true;

        
    }
    return true;
}

int main() {
    int n, cnt = 0;
    cin >> n;
    string word;

    while (n--) {
        cin >> word;
        if (solution(word))
            cnt++;
    }

    cout << cnt << endl;

}