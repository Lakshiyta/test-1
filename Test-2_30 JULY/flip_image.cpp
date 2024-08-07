//LEETCODE
/*Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
To flip an image horizontally means that each row of the image is reversed.
For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
For example, inverting [0,1,1] results in [1,0,0].*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(std::vector<vector<int>>& image) {
        int n = image.size();
        for (int i = 0; i < n; ++i) {
            int left = 0, right = n - 1;
            while (left <= right) {
                if (image[i][left] == image[i][right]) {
                    image[i][left] = 1 - image[i][left];
                    image[i][right] = image[i][left];
                }
                ++left;
                --right;
            }
        }
        return image;
    }
};

int main() {
    Solution solution;
    vector<std::vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    
    vector<vector<int>> result = solution.flipAndInvertImage(image);
    
    cout << "Resulting image: " << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
