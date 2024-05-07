#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
  int i, j, data, min = 0;
  cout << "Array sebelum diurutkan :";
  for (i = 0; i < n; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[i]) {
        data = arr[i];
        arr[i] = arr[j];
        arr[j] = data;
      }
    }
    min++;
  }
  cout << "Array setelah diurutkan :";
  for (i = 0; i < n; i++) {
    cout << arr[i] << "\t";
  }
 
}

int main() {
  int arr[6];
  cout << "Masukan Panjang Array : 6\n";
  cout << "Masukan Elemen Array : ";
  for (int i = 0; i < 6; i++) {
    cin >> arr[i];
  }
  bubbleSort(arr, 6);
  return 0;
}