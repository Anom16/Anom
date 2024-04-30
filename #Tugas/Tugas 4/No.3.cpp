#include <iostream>
using namespace std;

int main() {
    int n = 5; // jumlah baris segitiga
    int hasil = 0; // hasil penjumlahan

    for (int i = 1; i <= n; i++) {
        hasil += (2 * i); // penjumlahan bilangan genap
        for (int j = 1; j <= i; j++) {
          if (j < i) {
            cout << (2 * j) << " + "; // cetak bilangan genap dengan tanda +
          } else {
            cout << (2 * j); // cetak bilangan genap tanpa tanda +
          }
        }
        cout << " = " << hasil << std::endl; // cetak hasil penjumlahan
    }

    return 0;
}