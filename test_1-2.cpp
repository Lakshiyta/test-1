//Write a progam to find the  max element from the list
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {30, 20, 10, 50, 40};
    int maxi = l.front();
    for (int num : l) {
        if (num > maxi) {
            maxi = num;
        }
    }
    cout << "The maximum element in the list is: " << maxi << endl;

    return 0;
}
