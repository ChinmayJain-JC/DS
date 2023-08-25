#include <iostream>

using namespace std;

int binary_search(int arr[], int start, int end, int key) {
  while (start <= end) {
    int mid = (start + end) / 2;

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
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

  int index = binary_search(arr, 0, n - 1, key);

  if (index == -1) {
    cout << "The key is not found" << endl;
  } else {
    cout << "The key is found at index " << index << endl;
  }

  return 0;
}

