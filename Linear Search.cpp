#include <iostream>

using namespace std;

int linear_search(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  int n, key;
  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter the key to search: ";
  cin >> key;

  int index = linear_search(arr, n, key);

  if (index == -1) {
    cout << "The key is not found" << endl;
  } else {
    cout << "The key is found at index " << index << endl;
  }

  return 0;
}
