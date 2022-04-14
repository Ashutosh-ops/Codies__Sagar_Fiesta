#include <iostream>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int lcm(int a, int b){
   return a*b/gcd(a,b);
}

int main() {
   int num,a=0,p=0;
   cin >> num;
   int l[num] = {0};
   int k = 0, num2 = num;

   while(num2--){
      cin >> a;
      l[k] = a;
      k++;
   }

   k=2;
   int r = lcm(l[0], l[1]);
   if (num != 2){
      for(int i = 0; i< num-2; i++){
         r = lcm(r,l[k]);
         k++;
      }
   }

   cout << r;
   // printf("%d\n", r);

}
