#include <iostream>
using namespace std;

int main() 
{
 
  int n, arr[100], pos, elem;
  int choice;

  do {
    cout << "Array Operations Menu" << endl;
    cout << "1. Create Array" << endl;
    cout << "2. Display Array" << endl;
    cout << "3. Insert Element" << endl;
    cout << "4. Delete Element" << endl;
    cout << "5. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "Enter the number of elements: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
          cout << "Enter element " << i + 1 << ": ";
          cin >> arr[i];
        }
        break;

      case 2:
        for (int i = 0; i < n; i++) {
          cout << arr[i] << " ";
        }
        cout << endl;
        break;

      case 3:
        cout << "Enter the element to be inserted: ";
        cin >> elem;
        cout << "Enter the position to insert the element: ";
        cin >> pos;
        for (int i = n - 1; i >= pos; i--) {
          arr[i + 1] = arr[i];
        }
        arr[pos] = elem;
        break;

      case 4:
        cout << "Enter the position of the element to be deleted: ";
        cin >> pos;
        for (int i = pos; i < n - 1; i++) {
          arr[i] = arr[i + 1];
        }
        arr[n - 1] = 0;
        break;
        
      case 5:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice!" << endl;
        break;
    }
  }while (choice != 5);

  return 0;
}

