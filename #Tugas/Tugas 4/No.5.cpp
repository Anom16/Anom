#include <iostream>

using namespace std;

int main() {
    int n = 5; 
    int sum = 0;
    int num = 10;

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << num;
            sum += num;
            if (j != i - 1) {
                cout << " + ";
            }
            num -= 2; 
        }
        cout << " = " << sum << endl;
        sum = 0;
        num = 10; 
    }

    cout << "----------" << endl;
    cout << "110 " << endl; 

    return 0;
}
