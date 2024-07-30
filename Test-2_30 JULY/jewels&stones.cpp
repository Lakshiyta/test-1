//LEETCODE
/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. 
Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of stone from "A"*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_set<char> jewelsSet(jewels.begin(), jewels.end());
    int count = 0;
    for (char stone : stones) {
        if (jewelsSet.count(stone)) {
            count++;
        }
    }
    return count;
}

int main() {
    string jewels, stones;
    cout << "Enter the types of jewels: ";
    cin >> jewels;
    cout << "Enter the stones you have: ";
    cin >> stones;

    int result = numJewelsInStones(jewels, stones);
    cout << "Number of stones that are also jewels: " << result << endl;

    return 0;
}
