#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
  int i, j, data, min = 0;
  cout << "Array sebelum diurutkan :";
  for (i = 0; i < n; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n;
  cout << "Masukkan Panjang Array: ";
  cin >> n;
  if (n > 50) {
    cout << "Panjang array maksimum adalah 50." << endl;
    return 1;
  }
  int arr[n];
  cout << "Masukkan " << n << " angka: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr, n);
  cout << "Array setelah diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;
  return 0;
}
