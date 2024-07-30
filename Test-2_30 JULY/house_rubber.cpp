//LEETCODE
/*You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will 
automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can 
rob tonight without alerting the police.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }
        
        return dp[n - 1];
    }
};

int main() {
    vector<int> nums;
    int n, value;
    
    cout << "Enter the number of houses: ";
    cin >> n;
    
    cout << "Enter the amount of money in each house: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        nums.push_back(value);
    }
    
    Solution solution;
    int maxMoney = solution.rob(nums);
    
    cout << "Maximum amount of money you can rob: " << maxMoney << endl;
    
    return 0;
}
