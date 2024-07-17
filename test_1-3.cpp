#include <iostream>
using namespace std;

bool isMultipleOf3(int num) {
    return num % 3 == 0;
}

int countMultiplesOf3(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            cout << "Invalid Input" << endl;
            exit(1); 
        }
        if (isMultipleOf3(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n > 20) {
        cout << "Array size exceeds the maximum limit." << endl;
        return 1; 
    }

    int arr[20];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = countMultiplesOf3(arr, n);
    cout << "Count of multiples of 3: " << result << endl;

    return 0;
}
