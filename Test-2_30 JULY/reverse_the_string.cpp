#include <bits/stdc++.h>
using namespace std;

string reverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string STR;
        cin >> STR;
        cout << reverseString(STR) << endl;
    }
    return 0;
}
