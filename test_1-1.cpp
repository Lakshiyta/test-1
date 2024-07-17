//Write a program to display the array element.
#include <iostream>
using namespace std;

int main() {
    int num[] = {7, 4, 6, 11, 30};
    cout << "The numbers are: ";
    for (int n : num) {
        cout << n << " ";
    }
    return 0;
}
