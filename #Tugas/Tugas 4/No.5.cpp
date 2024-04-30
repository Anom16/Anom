#include <iostream>

using namespace std;

int main() {
    int n = 5; // Jumlah baris segitiga siku terbalik
    int sum = 0;
    int num = 10; // Bilangan awal

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << num;
            sum += num;
            if (j != i - 1) {
                cout << " + ";
            }
            num -= 2; // Mengurangi 2 setiap kali untuk mendapatkan bilangan genap berikutnya
        }
        cout << " = " << sum << endl;
        sum = 0; // Reset jumlah setiap kali baris baru dimulai
        num = 10; // Mengembalikan bilangan awal setiap kali baris baru dimulai
    }

    cout << "----------" << endl;
    cout << "110 " << endl; // Output hasil penjumlahan terakhir

    return 0;
}
