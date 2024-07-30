#include <iostream>
#include <string>
#include <unordered_map>  // Correct header for unordered_map
#include <sstream>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int, string> mp;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            int pos = word.back() - '0';  // Get the last character as the position
            word.pop_back();  // Remove the number from the word
            mp[pos] = word;  // Store the word in the map
        }

        string result = "";
        for (int i = 1; i <= mp.size(); i++) {
            result += mp[i];
            if (i != mp.size()) {
                result += " ";
            }
        }
        return result;
    }
};

int main() {
    string s;
    cout << "Enter the string: " << endl;
    getline(cin, s);
    Solution sol;  // Correct instantiation
    cout << sol.sortSentence(s) << endl;  // Pass the string variable directly
    return 0;
}