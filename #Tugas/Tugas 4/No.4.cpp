#include <iostream>
using namespace std;

int main() {
    int n = 5; // jumlah baris segitiga
    long long hasil = 1; // hasil perkalian

    for (int i = 1; i <= n; i++) {
        hasil *= (2 * i - 1); // perkalian bilangan ganjil
        for (int j = 1; j <= i; j++) {
          if (j < i) {
            cout << (2 * j - 1) << " * "; // cetak bilangan ganjil dengan tanda *
          } else {
            cout << (2 * j - 1); // cetak bilangan ganjil tanpa tanda *
          }
        }
        cout << " = " << hasil << endl; // cetak hasil perkalian
    }

    return 0;
}