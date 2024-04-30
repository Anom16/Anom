#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    long long hasil = 1; 

    for (int i = 1; i <= n; i++) {
        hasil *= (2 * i - 1);
        for (int j = 1; j <= i; j++) {
          if (j < i) {
            cout << (2 * j - 1) << " * "; 
            
          } else {
            cout << (2 * j - 1); 
          }
        }
        cout << " = " << hasil << endl; 
    }

    return 0;
}