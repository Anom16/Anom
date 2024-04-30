#include <iostream>
using namespace std;

int main() {
    int n = 10; // jumlah deret bilangan ganjil
    int hasil = 0; // hasil penjumlahan

    for (int i = 1; i <= n; i++) {
        hasil += (2 * i - 1); // penjumlahan bilangan ganjil
    }

    cout << "1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 = " << hasil << endl;

    return 0;
}