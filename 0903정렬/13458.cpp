//13458
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, b, c;
    long long res = 0;
    
    cin >> n;
    vector<int> arr;
    arr.assign(n, 0);

    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    cin >> b >> c;

    for (int i = 0;i < n;i++) {
        if (arr[i] - b <= 0)
            res++;
        else {
            res += (arr[i] - b) / c;
            if ((arr[i] - b) % c > 0)
                res+=2;
            else {
                res++;
            }
        }
    }

    cout << res;

}