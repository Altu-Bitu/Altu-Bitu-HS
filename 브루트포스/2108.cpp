#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int setMean(vector<int> v) {
	double sum = 0, mean;
	for (auto i = v.begin();i != v.end();i++) {
		sum += *i;
	}
	mean = sum / v.size();
	return round(mean);
}

int setMiddle(vector<int> v) {
	sort(v.begin(), v.end());
	return v[v.size() / 2];
}

int setMode(vector<int> v) {
	vector<int> cnt;
	cnt.assign(8001,0); // -4000 ~ 4000
	int mode=0, max=0;

	bool sec_num = false;

	for (int i = 0;i < v.size();i++) {
		int k = v[i] + 4000;
		cnt[k]++;
		if (cnt[k] > max)
			max = cnt[k];
	}
	
	for (int i = 0;i < cnt.size();i++) {
		if (cnt[i] == max) {
			mode = i - 4000;
			if (sec_num)
				break;
			sec_num = true;
		}
	}
	return mode;
}

int setRange(vector<int> v) {
	sort(v.begin(), v.end());
	return(v.back() - v.front());
}

int main() {
	int n, k; //수의 개수 
	int mean, mid, mode, range;
	cin >> n;
	vector<int> v(n);
	for (int i = 0;i < n;i++) {
		cin >> v[i];
	}


	mean = setMean(v);
	mid = setMiddle(v);
	mode = setMode(v);
	range = setRange(v);

	cout << mean << "\n" << mid << "\n" << mode << "\n" << range;

	return 0;


}