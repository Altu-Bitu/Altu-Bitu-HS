//13548
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, B, C,res=0;
    vector<int> arr;

    cin >> N;
    arr.assign(N, 0);

    for (int i = 0;i < N;i++) {
        cin >> arr[i];
    }

    cin >> B >> C;

    for (int i = 0;i < N;i++) {
        res += (arr[i] - B) / C;
        if ((arr[i] - B) % C > 0)
            res+=2;
        else
            res++;
    }

    cout << res;

}