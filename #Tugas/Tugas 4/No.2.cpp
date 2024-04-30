#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int hasil = 0; 

    for (int i = 1; i <= n; i++) {
        hasil += (2 * i - 1);
    }

    cout << "1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 = " << hasil << endl;

    return 0;
}