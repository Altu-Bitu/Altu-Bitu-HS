//요요 시뮬레이션 19636
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   int w0, l_0, t, d, l, a;
   cin >> w0 >> l_0 >> t >> d >> l >> a;
   int l_1 = l_0;
   int w_1, w_2; //다이어트 후 체중 (고려X/고려O)

   w_1 = w0 + (l - (l_0 + a)) * d;
   if (w_1 <= 0 || l_0 <= 0) {

      cout << "Danger Diet\n";
   }
   else {
      cout << w_1 << " " << l_0 <<"\n";
   }

   w_2 = w0;
   while (d--) {
      int k;
      k = l - (l_0 + a);
      w_2 += k;
      if (k > t || k < -t) {
         l_0 += (k-1)/2;
      }

      if (w_2 <= 0 || l_0 <= 0) {
         cout << "Danger Diet";
         return 0;
      }

   }


   cout << w_2 << " " << l_0;
   
   if (l_1 - l_0 > 0) {
      cout << " YOYO";
   }
   else {
      cout << " NO";
   }

}