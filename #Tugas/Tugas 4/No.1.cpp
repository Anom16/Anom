#include <iostream>
using namespace std;

int main() {
    int n = 10; // jumlah deret bilangan genap
    int hasil = 0; // hasil penjumlahan

    for (int i = 1; i <= n; i++) {
        hasil += (2 * i); // penjumlahan bilangan genap
    }

    cout << "2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20 = " << hasil << endl;

    return 0;
}