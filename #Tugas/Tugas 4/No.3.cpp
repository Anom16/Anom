#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    int hasil = 0; 

    for (int i = 1; i <= n; i++) {
        hasil += (2 * i);
        for (int j = 1; j <= i; j++) {
          if (j < i) {
            cout << (2 * j) << " + "; 
          } else {
            cout << (2 * j); 
          }
        }
        cout << " = " << hasil << std::endl;
    }

    return 0;
}