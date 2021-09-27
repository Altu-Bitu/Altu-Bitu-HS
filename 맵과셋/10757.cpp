//10757 큰수 A+B
#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> add(string a, string b) {

   stack<int> s;

   int a1 = a.length() - 1, b1 = b.length() - 1; //더하려는 숫자의 인덱스

   bool carry = false; // 수 더했을때 10보다 크면 true 아니면 false

   while (a1 >= 0 && b1 >= 0) { //a와 b 둘다 더할 수가 남아있을 때
      int res = (a[a1--] - '0') + (b[b1--] - '0');
      if (carry)
         res += 1;

      if (res / 10 >= 1)
         carry = true;
      else
         carry = false;

      s.push(res % 10); //res의 일의 자리 수를 push한다.
   }

   while (a1 >= 0) { //a만 아직 안더한 숫자가 남아있을때
      int res = a[a1--] - '0';
      if (carry)
         res += 1;
      if (res / 10 >= 1)
         carry = true;
      else
         carry = false;
      s.push(res % 10);
   }

   while (b1 >= 0) { //b만 아직 안더한 숫자가 남아있을때
      int res = b[b1--] - '0';
      if (carry)
         res += 1;
      if (res / 10 >= 1)
         carry = true;
      else
         carry = false;
      s.push(res % 10);
   }

   if (carry) //아직 carry가 남아있을 때
      s.push(1);
   return s;
}

int main() {
   string a, b;
   cin >> a >> b;

   stack<int> s;

   s = add(a, b);

   while (!s.empty()) {
      cout << s.top();
      s.pop();
   }

}